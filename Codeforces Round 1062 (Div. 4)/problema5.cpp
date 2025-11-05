#include<bits/stdc++.h>

using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

typedef long long ll;

ll check(ll d, vector<ll> &a, ll x) {
    vector<pair<ll, ll>> intervals;
    ll n = a.size();
    for (ll i = 0; i < n; i++) {
        ll L = a[i] - d + 1;
        ll R = a[i] + d - 1;
        if (L > x) continue;
        if (R < 0) continue;
        L = max(0LL, L);
        R = min(x, R);
        if (L <= R) {
            intervals.push_back({L, R});
        }
    }
    sort(intervals.begin(), intervals.end());
    ll covered = 0;
    ll last = -1;
    for (auto &iv : intervals) {
        ll L = iv.first, R = iv.second;
        if (L > last) {
            covered += (R - L + 1);
            last = R;
        } else {
            if (R > last) {
                covered += (R - last);
                last = R;
            }
        }
    }
    return (x + 1) - covered;
}

int main() {
    input;
    output;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        ll low = 0, high = x + 1;
        ll d_opt = 0;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (check(mid, a, x) >= k) {
                d_opt = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        vector<pair<ll, ll>> intervals;
        for (ll i = 0; i < n; i++) {
            ll L = a[i] - d_opt + 1;
            ll R = a[i] + d_opt - 1;
            if (L > x) continue;
            if (R < 0) continue;
            L = max(0LL, L);
            R = min(x, R);
            if (L <= R) {
                intervals.push_back({L, R});
            }
        }
        sort(intervals.begin(), intervals.end());
        vector<pair<ll, ll>> merged;
        ll last = -1;
        for (auto &iv : intervals) {
            ll L = iv.first, R = iv.second;
            if (L > last) {
                merged.push_back({L, R});
                last = R;
            } else {
                if (R > last) {
                    merged.back().second = R;
                    last = R;
                }
            }
        }
        
        vector<ll> ans;
        if (merged.size() == 0) {
            for (ll i = 0; i <= x && ans.size() < k; i++) {
                ans.push_back(i);
            }
        } else {
            for (ll i = 0; i < merged[0].first && ans.size() < k; i++) {
                ans.push_back(i);
            }
            for (ll i = 0; i < merged.size() - 1 && ans.size() < k; i++) {
                ll start = merged[i].second + 1;
                ll end = merged[i+1].first - 1;
                for (ll j = start; j <= end && ans.size() < k; j++) {
                    ans.push_back(j);
                }
            }
            for (ll i = merged.back().second + 1; i <= x && ans.size() < k; i++) {
                ans.push_back(i);
            }
        }
        
        for (ll i = 0; i < k; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
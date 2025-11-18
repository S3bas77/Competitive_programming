#include<bits/stdc++.h>

using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

typedef long long ll;

int main() {
    input;
    output;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll total = 0;
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            total += c[i];
        }
        vector<ll> dp(n);
        for (int i = 0; i < n; i++) {
            dp[i] = c[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] <= a[i]) {
                    if (dp[j] + c[i] > dp[i]) {
                        dp[i] = dp[j] + c[i];
                    }
                }
            }
        }
        ll max_sum = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] > max_sum) {
                max_sum = dp[i];
            }
        }
        cout << total - max_sum << '\n';
    }
    return 0;
}
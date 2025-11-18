#include<bits/stdc++.h>

using namespace std;


#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)


vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main() {
    input;
    output;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 1000;
        for (long long num : a) {
            for (int p : primes) {
                if (num % p != 0) {
                    if (p < ans) {
                        ans = p;
                    }
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
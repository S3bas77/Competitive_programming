#include<bits/stdc++.h>

using namespace std;


#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

int main(){
    input;
    output;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool par = false, impar = false;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] % 2 == 0) { 
                par = true;
            } else {
                impar = true;
            }
        }
        if (par && impar) {
            sort(a.begin(), a.end());
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

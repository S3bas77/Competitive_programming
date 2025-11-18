#include<bits/stdc++.h>

using namespace std;


#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

int main(){
    input;
    output;
    int t;
    cin >> t;
    while (t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a==b && b==c && c==d) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}



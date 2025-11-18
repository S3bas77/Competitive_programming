#include <bits/stdc++.h>
using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

// https://cses.fi/problemset/task/1669

int main(){
    input;
    output;
    long long n;
    cin>>n;
    cout<<n;
    while(n!=1){
        if (n%2 == 0){
            n=n/2;
        } else {
            n=n*3+1;
        }
        cout<<" "<<n;
    }
}
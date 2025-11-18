#include <bits/stdc++.h>
using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

// https://cses.fi/problemset/task/1094

int main(){
    input;
    output;

    long long n, counter = 0;
    cin>>n;
    vector<long long> valor(n);
    cin>>valor[0];
    for(int i = 1; i < n; i++){
        cin>>valor[i];
        if (valor[i] < valor[i-1]) {
            counter += (valor[i-1] - valor[i]);
            valor[i] = valor[i-1];
        }
    }
    cout<<counter;
    return 0;
}
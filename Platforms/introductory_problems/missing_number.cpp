#include <bits/stdc++.h>
using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

// https://cses.fi/problemset/task/1083

int main(){
    input;
    output;
    int n;
    cin>>n;
    long long sum_given = 0;
    
    for(int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        sum_given += x;
    }
    
    long long total_sum = (long long)n * (n + 1) / 2;
    long long missing = total_sum - sum_given;
    
    cout << missing << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

// https://cses.fi/problemset/task/1069

int main(){
    input;
    output;
    string a;
    cin>>a;

    int max_count = 1; 
    int current_count = 1;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i-1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        max_count = max(max_count, current_count);
    }

    cout << max_count << endl;

    
    return 0;
}
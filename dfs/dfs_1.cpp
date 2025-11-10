#include<bits/stdc++.h>
using namespace std;

#define input freopen("freopen/in.txt", "r", stdin)
#define output freopen("freopen/out.txt", "w", stdout)

//https://cses.fi/problemset/task/1666/

vector<bool> visited;
vector<vector<int>> adj;

void dfs(int u){
    visited[u] = 1;
    for(auto v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    input;
    output;
    int n,m;
    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1, 0);

    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> ans;

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            ans.push_back(i);
        }
    }

    cout<<ans.size()-1<<"\n";
    if(ans.size()>=2){
        for(int i = 1; i<ans.size();i++){
            cout<<ans[i-1]<<" "<<ans[i];
            cout<<"\n";
        }
    }
    
}


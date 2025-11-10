#include <bits/stdc++.h>
using namespace std;

// https://cses.fi/problemset/task/1669



vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent;
int startNode = -1, endNode = -1;

bool dfs(int node, int par) {
    visited[node] = true;
    parent[node] = par;

    for (int i = 0; i < adj[node].size(); i++) {
        int neighbor = adj[node][i];

        if (neighbor == par) continue;

        if (visited[neighbor]) {
            startNode = neighbor;
            endNode = node;
            return true;
        }

        if (dfs(neighbor, node)) {
            return true;
        }
    }

    return false;
}

int main() {


    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1, false);
    parent.resize(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool foundCycle = false;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (dfs(i, -1)) {
                foundCycle = true;
                break;
            }
        }
    }

    if (!foundCycle) {
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> cycle;
    cycle.push_back(startNode);

    int current = endNode;
    while (current != startNode) {
        cycle.push_back(current);
        current = parent[current];
    }

    cycle.push_back(startNode); 

    cout << cycle.size() << endl;
    for (int i = 0; i < cycle.size(); i++) {
        cout << cycle[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int> >& adj, vector<bool>& cheknuli) {
    cheknuli[node] = true;
    for (int sosed : adj[node]) {
        if (!cheknuli[sosed]) {
            dfs(sosed, adj, cheknuli);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int> > adj(N + 1); 
    vector<bool> cheknuli(N + 1, false); 

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int components = 0;
    for (int i = 1; i <= N; i++) {
        if (!cheknuli[i]) {
            components++;
            dfs(i, adj, cheknuli);
        }
    }

    cout << components << endl;
    return 0;
}
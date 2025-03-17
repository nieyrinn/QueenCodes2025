#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s; cin >> n >> m >> s;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> x(n + 1, -1); queue<int> q; x[s] = 0; q.push(s);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int sosedny : graph[node]) {
            if (x[sosedny] == -1) {
                x[sosedny] = x[node] + 1;
                q.push(sosedny);
            }
        }
    }

    int whatweneed = *max_element(x.begin() + 1, x.end());
    cout << (whatweneed == -1 ? -1 : whatweneed) << endl;
    return 0;
}

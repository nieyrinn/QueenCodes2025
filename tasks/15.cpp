// #include <iostream>
// #include <vector>
// #include <queue>
// #include <limits>
// using namespace std;
 
// const long long INF = numeric_limits<long long>::max();
 
// void dijkstra(int start, vector<vector<pair<int, int> > >& adj, vector<long long>& dist) {
//     priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;
//     dist[start] = 0;
//     pq.push(make_pair(0, start));
 
//     while (!pq.empty()) {
//         int u = pq.top().second;
//         long long d = pq.top().first;
//         pq.pop();
 
//         if (d > dist[u]) continue;
 
//         for (auto& edge : adj[u]) {
//             int v = edge.first;
//             long long weight = edge.second;
 
//             if (dist[u] + weight < dist[v]) {
//                 dist[v] = dist[u] + weight;
//                 pq.push(make_pair(dist[v], v));
//             }
//         }
//     }
// }
 
// int main() {
//     int N, M, Q;
//     cin >> N >> M >> Q;
 
//     vector<vector<pair<int, int> > > adj(N + 1);
//     for (int i = 0; i < M; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
 
//     for (int i = 0; i < Q; i++) {
//         int s, t;
//         cin >> s >> t;
 
//         vector<long long> dist(N + 1, INF);
//         dijkstra(s, adj, dist);
 
//         if (dist[t] == INF) {
//             cout << -1 << endl;
//         } else {
//             cout << dist[t] << endl;
//         }
//     }
 
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
 
const long long INF = numeric_limits<long long>::max();
 
void dijkstra(int start, vector<vector<pair<int, int> > >& adj, vector<long long>& dist) {
    priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;
    dist[start] = 0;
    pq.push(make_pair(0, start));
 
    while (!pq.empty()) {
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();
 
        if (d > dist[u]) continue;
 
        for (auto& edge : adj[u]) {
            int v = edge.first;
            long long weight = edge.second;
 
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}
 
int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
 
    vector<vector<pair<int, int> > > adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
 
    for (int i = 0; i < Q; i++) {
        int s, t;
        cin >> s >> t;
 
        vector<long long> dist(N + 1, INF);
        dijkstra(s, adj, dist);
 
        if (dist[t] == INF) {
            cout << -1 << endl;
        } else {
            cout << dist[t] << endl;
        }
    }
 
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

const int INF = INT_MAX;

void dijkstra(int V, vector<vector<pair<int, int>>> &adj,
              int src)
{

    // Distance array
    vector<int> dist(V, INF);

    // Min Heap: {distance, vertex}
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>>
        pq;

    // Source distance = 0
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {

        int d = pq.top().first;
        int u = pq.top().second;

        pq.pop();

        // Ignore outdated entries
        if (d != dist[u])
        {
            continue;
        }

        // Visit all neighbours
        for (auto edge : adj[u])
        {

            int v = edge.first;
            int weight = edge.second;

            // Relaxation
            if (dist[u] + weight < dist[v])
            {

                dist[v] = dist[u] + weight;

                pq.push({dist[v], v});
            }
        }
    }

    // Print shortest distances
    cout << "Vertex  Distance from Source\n";

    for (int i = 0; i < V; i++)
    {

        cout << i << "        ";

        if (dist[i] == INF)
        {
            cout << "INF";
        }
        else
        {
            cout << dist[i];
        }

        cout << endl;
    }
}

int main()
{

    int V = 5;

    vector<vector<pair<int, int>>> adj(V);

    // Undirected weighted graph
    adj[0].push_back({1, 4});
    adj[0].push_back({2, 1});

    adj[1].push_back({0, 4});
    adj[1].push_back({2, 2});
    adj[1].push_back({3, 1});

    adj[2].push_back({0, 1});
    adj[2].push_back({1, 2});
    adj[2].push_back({3, 5});

    adj[3].push_back({1, 1});
    adj[3].push_back({2, 5});
    adj[3].push_back({4, 3});

    adj[4].push_back({3, 3});

    int source = 0;

    dijkstra(V, adj, source);

    return 0;
}

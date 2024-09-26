#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // Directed graph adjacency set for faster lookups
    vector<unordered_set<int>> adj(n);

    // Read the edges
    for (int i = 0; i < e; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].insert(b); // Directed edge from 'a' to 'b'
    }

    // Read number of queries
    int q;
    cin >> q;

    // Process each query
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        // Check if there is a direct edge from u to v
        if (u == v || adj[u].find(v) != adj[u].end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<set<int>> arr(n);

    // Read the edges
    for (int i = 0; i < e; ++i)
    {
        int a, b;
        cin >> a >> b;
        arr[a].insert(b);
        arr[b].insert(a);
    }

    // Read number of queries
    int q;
    cin >> q;

    // Process each query
    for (int i = 0; i < q; ++i)
    {
        int node;
        cin >> node;

        // Check if there are connected nodes
        if (arr[node].empty())
        {
            cout << "-1\n";
        }
        else
        {
            // Copy the connected nodes to a vector
            vector<int> connectedNodes(arr[node].begin(), arr[node].end());

            // Sort the vector in descending order
            sort(connectedNodes.rbegin(), connectedNodes.rend());

            // Print the nodes in descending order
            for (int connected : connectedNodes)
            {
                cout << connected << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}

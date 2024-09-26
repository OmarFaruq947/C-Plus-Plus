#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
bool vis[1000];
int level[1000];
int par[1000];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0; // for level tracking
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << "parent value " << parent << endl;

        for (int child : v[parent])
        {
            cout << child << endl;
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1; // for level tracking
                par[child] = parent;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, destination;
    cin >> src, destination;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level)); // for level tracking
    memset(par, -1, sizeof(par));
    bfs(src);

    // for (int i = 0; i < n; i++) // for level tracking
    // {
    //     cout << level[i] << " ";
    // }

    int x = destination;
    vector<int> path;
    while (x != -1)
    {
        cout << x << " ";
        x = par[x];
    }
    reverse(path.begin(), path.end());
    for (int val : path)
    {
        cout << "path: " << val << " ";
    }
    return 0;
}

// time complexity = O( v + E)
// space complexity = O( N )
// wast case = O(n^2)
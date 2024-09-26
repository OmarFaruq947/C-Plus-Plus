#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
bool vis[1000];
int parentArray[1000];
bool ans;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        // cout << parent << endl;
        q.pop();
        for (int child : v[parent])
        {
            if (vis[child] == true && parentArray[parent] != child)
            {
                ans = true;
            }
            if (!vis[child])
            {
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
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
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }
    if (ans)
    {
        cout << "Cycle founded" << endl;
    }
    else
    {
        cout << "Cycle not found" << endl;
    }

    return 0;
}

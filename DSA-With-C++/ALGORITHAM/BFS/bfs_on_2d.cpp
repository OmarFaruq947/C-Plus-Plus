#include <bits/stdc++.h>
using namespace std;

bool vis[20][20];
int dis[20][20];
vector<pair<int, int>> d = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {

        pair<int, int> parent = q.front();
        q.pop();
        cout << parent.first << " " << parent.second << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = parent.first + d[i].first;
            int cj = parent.second + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                dfs(ci, cj);
            }
        }

        // for (int child : v[parent])
        // {
        //     if(vis[child] == false){
        //         q.push(child);
        //         vis[child] = true;
        //         dis[child]=dis[parent]+1;
        //     }
        // }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> mapData;
bool vis[1001][1001];
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && mapData[i][j] == '.' && !vis[i][j]);
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    for (auto dir : directions)
    {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if (isValid(ni, nj))
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    cin >> n >> m;
    mapData.resize(n);
    for (int i = 0; i < n; i++)
        cin >> mapData[i];

    memset(vis, false, sizeof(vis));
    int apartmentCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapData[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                apartmentCount++;
            }
        }
    }
    cout << apartmentCount << endl;

    return 0;
}

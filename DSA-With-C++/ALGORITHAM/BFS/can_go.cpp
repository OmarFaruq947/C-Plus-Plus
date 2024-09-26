#include <bits/stdc++.h>
using namespace std;

char matt[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int N, M;

bool flag = false;

bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
    {
        return false;
    }

    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) == true && vis[ci][cj] == false && matt[ci][cj] != '#')
        {
            if (matt[ci][cj] == 'B')
            {
                flag = true;
                return;
            }

            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> N >> M;

    int si, sj;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matt[i][j];
            if (matt[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(si, sj);

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
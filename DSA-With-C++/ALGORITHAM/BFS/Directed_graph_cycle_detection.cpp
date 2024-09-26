#include <bits/stdc++.h>
using namespace std;

int knightMoves[8][2] = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isInsideBoard(int x, int y, int N, int M)
{
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int bfs(int knightX, int knightY, int queenX, int queenY, int N, int M)
{

    if (knightX == queenX && knightY == queenY)
    {
        return 0;
    }
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<pair<pair<int, int>, int>> q;

    q.push({{knightX, knightY}, 0});
    visited[knightX][knightY] = true;

    while (!q.empty())
    {
        auto current = q.front();
        int x = current.first.first;
        int y = current.first.second;
        int Z = current.second;
        q.pop();

        for (int i = 0; i < 8; ++i)
        {
            int newX = x + knightMoves[i][0];
            int newY = y + knightMoves[i][1];

            if (newX == queenX && newY == queenY)
                return Z + 1;

            if (isInsideBoard(newX, newY, N, M) && !visited[newX][newY])
            {
                visited[newX][newY] = true;
                q.push({{newX, newY}, Z + 1});
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M;
        cin >> N >> M;

        int knightX, knightY, queenX, queenY;
        cin >> knightX >> knightY;
        cin >> queenX >> queenY;
        int result = bfs(knightX, knightY, queenX, queenY, N, M);
        cout << result << endl;
    }

    return 0;
}

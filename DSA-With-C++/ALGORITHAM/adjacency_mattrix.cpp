#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1; // directed graph r somoy dite hoy na (ayta holo ulta counnection)
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    if (mat[3][1] == 1)
    {
        cout << "Connection ache" << endl;
    }
    else
    {
        cout << "Connection nai" << endl;
    }

    return 0;
}
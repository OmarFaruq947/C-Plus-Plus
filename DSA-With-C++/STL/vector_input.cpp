// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;
//         v.push_back(temp);
//     }

//     // output case 1
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }

//     // output case 2 (rang for loop)

//     for (int val : v)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int val : v)
    {
        cout << val << "  ";
    }

    return 0;
}
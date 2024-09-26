#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, int>> q;
    for (int i = 1; i <= n; i++)
    {
        string name;
        int value;
        cin >> name >> value;
        q.push_back(make_pair(name, value));
    }
    sort(q.begin(), q.end(), cmp);
    for (auto i : q)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    cin.ignore();

    for (int i = 1; i <= t; i++)
    {
        string sentence;
        getline(cin, sentence);

        string word;

        stringstream ss(sentence);

        map<string, int> mp;
        string countWord;
        int cnt = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > cnt)
            {
                cnt = mp[word];
                countWord = word;
            }
        }
        cout << countWord << " " << cnt << endl;
    }

    return 0;
}
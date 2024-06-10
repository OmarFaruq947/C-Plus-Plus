#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int murks;
};

bool cmp(Student a, Student b)
{
    if (a.murks >= b.murks)
    {
        return true;
    }
    else if (a.murks < b.murks)
    {
        return false;
    }
}
int main()
{

    int n;
    cin >> n;

    Student *arr = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].id >> arr[i].murks;
    }

    // sort

    // int min = INT_MAX;
    // int max = INT_MIN;

    sort(arr, arr + n, cmp);

    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].murks << endl;
    }

    // cout << "min murks :" << min << endl;
    // cout << "max_murks :" << max << endl;

    return 0;
}
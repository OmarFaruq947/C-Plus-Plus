#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int english_marks;
};

bool cmp(Student a, Student b)
{

    if (a.english_marks + a.math_marks == b.english_marks + b.math_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return (a.english_marks + a.math_marks > b.english_marks + b.math_marks);
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }

    return 0;
}
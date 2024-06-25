#include <bits/stdc++.h>
using namespace std;

void func(int *p)
{
    cout << p << endl;
}

int main()
{

    int p = 10;
    int *ptr = &p;

    func(ptr);
    cout << "m-> " << &p << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    double result = A / B;

    int floor_result = floor(result);
    int ceil_result = ceil(result);
    int round_result = round(result);

    cout << "floor " << A << " / " << B << " = " << floor_result << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_result << endl;
    cout << "round " << A << " / " << B << " = " << round_result << endl;

    return 0;
}
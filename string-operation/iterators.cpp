#include<bits/stdc++.h>
using namespace std;

int main(){
// int n;
// cin >> n ;
// cout << n <<endl;

// getchar(); // function of C
// cin.ignore();  // function of C++

// string s;
// getline(cin, s);
// cout << s <<endl;



string S;
getline(cin, S);
stringstream ss(S);
string word;

int count = 0;

while (ss>>word)
{
    cout << word <<endl;
    count+=1;
}
cout << count <<endl;
return 0;
}
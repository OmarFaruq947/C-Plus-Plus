#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin >> s ;

// for (int i = 0; i < s.size(); i++)
// {
//     cout << s[i] <<endl;
// }


// short form

for(char str:s) cout << str <<endl;

// ASCII value print
for(int str:s) cout << str <<endl;
return 0;
}
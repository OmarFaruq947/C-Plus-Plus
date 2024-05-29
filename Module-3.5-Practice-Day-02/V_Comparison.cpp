#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;
char s;
string input;
  getline(cin, input);
  stringstream ss(input);
    ss >> n >> s >> m;


bool result;

if (s=='>') result = (n>m);
else if(s=='<') result = (n<m);
else if(s=='=') result = (n==m);
else result= false;

if(result) cout <<"Right" <<endl;
else cout <<"Wrong" <<endl;


return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Freq {
    public:
    char value;
    int count;
};

bool cmp(Freq a, Freq b){
    return a.count>b.count;
}

int main(){
string S;
cin >> S;

Freq f[26];
for (int i = 0; i < 26; i++)
{
    
}

for(char c:S){

}


sort(f, f+26, cmp);
for (int i = 0; i < 26; i++)
{
    if (f[i].count >0)
    {
        cout << f[i].value<<" - "<< f[i].count <<endl;
    }   
}
return 0;
}
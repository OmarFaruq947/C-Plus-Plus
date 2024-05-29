#include<bits/stdc++.h>
using namespace std;

int main(){
int size = 100001;
char str[size];
while (cin.getline(str,size))
{
    int stringlength = strlen(str);
    sort(str, str + stringlength);
    for (int i = 0; i < stringlength; i++)
    {
        if(int(str[i] >= int('a')  && str[i] <= int('z'))){
            cout << str[i];
        }
    }
    cout <<endl;
}

return 0;
}
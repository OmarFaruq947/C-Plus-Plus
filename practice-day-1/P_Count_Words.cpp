#include<bits/stdc++.h>
using namespace std;

int main(){

string str;
getline(cin, str);
int cnt = 0;
bool found = false;

for(char c:str){
    if( isalpha(c)){
       if(found == false){
        cnt ++;
        found = true;
       }
    }else{
        found = false;
    }
}




cout << cnt <<endl;


return 0;
}
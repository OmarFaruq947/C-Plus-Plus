#include<bits/stdc++.h>
using namespace std;


string string_spliting(string &val){
    stringstream ss(val);
    string first_name, last_name;
    ss>> first_name;
    ss>> last_name;
    return last_name;
}

int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    string str1, str2;
    

    getline(cin, str1);
    cin.ignore();
    getline(cin, str2);

    string_spliting(str1);
    string_spliting(str2);
  

    if(string_spliting(str1) == string_spliting(str2)) cout<< "ARE Brothers" <<endl;
    else cout<< "NOT" <<endl;

    return 0;
};
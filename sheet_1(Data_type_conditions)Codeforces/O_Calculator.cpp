#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int A, B;
    char str;
    cin>> A;
    cin>> str;
    cin>>B;

    if (str== '+'){
        long long int result = A+B;
        cout<< result <<endl;
    }
    else if(str == '*'){
        long long int result = A*B;
        cout<< result <<endl;
    }
    else if(str == '/'){
        long long int result = A/B;
        cout<< result <<endl;
    }
    else{
        long long int result = A-B;
        cout<< result <<endl;
    }
    
    return 0;
};
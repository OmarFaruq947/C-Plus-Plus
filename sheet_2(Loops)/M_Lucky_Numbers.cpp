#include<bits/stdc++.h>
using namespace std;


bool isLuckyNumber(int num){

while (num > 0)
{
    int last_digit= num % 10;
    if(last_digit != 4 && last_digit !=7 ){
    return false;
    }
    num/= 10;
}
return true;

}


int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int a,b;
    cin>> a>>b ;
    bool found = false;
    for (int i = a; i<= b; i++)
    {
        if( isLuckyNumber(i)){
            cout<< i <<" ";
            found = true;
        }
    }
    
    
if(!found){
    cout<< -1;
}

    return 0;
};
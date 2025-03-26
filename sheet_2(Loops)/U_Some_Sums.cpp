#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
    int sum =0;
    while (num>0)
    {
        sum +=num%10;
        num /= 10;
    }
    return sum;
}

int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int n; cin>> n ;
    long long int a,b; 
    cin>> a>>b;

    long long int sum=0; 
    
    for (int i = 1 ; i <=n; i++)
    {
        int digitSum = sumOfDigits(i);
        if(digitSum >= a && digitSum <= b){
            sum +=i;
        }
    }

    cout<< sum <<endl;

    return 0;
};

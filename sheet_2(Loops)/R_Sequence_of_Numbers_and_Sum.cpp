#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

while (true){
    int n,m; 
    cin >> n >> m ;

    if(n<=0  || m<=0) {
        break;
    }

    int start = min(n, m);
    int end = max(n, m);

    int sum =0;
    for (int i = start; i <=end; i++)
    {
        sum += i;
        cout<< i<<" ";
    }
    cout<<"sum ="<<sum <<endl;

   }
   
    return 0;
};
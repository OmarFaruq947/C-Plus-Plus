#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int n; cin>> n ;

    for (int col = 0; col < n; col++)
    {
        for (int row = 0; row <=col; row++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    

    return 0;
};
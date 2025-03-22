#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int q;
    cin>> q ;

    while (q--)
    {
        int a,b;
        cin>> a>>b ;

        int start = min(a,b);
        int end = max(a,b);
        int sum = 0;
        for (int i = start+1; i < end; i++)
        {
            if(i % 2 != 0){
                sum +=i;
            }
        }

        cout<< sum <<endl;
        
    }
    return 0;
};
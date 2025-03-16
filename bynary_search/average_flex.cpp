#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>> t;
	
	while(t--){
    int n; cin>> n;

    vector<int> v(n);
	
	for(int i = 0; i<n; i++){
	    cin>> v[i];
	}

    sort(v.begin(), v.end());
    int ans = 0;

    for (int i = 0; i < n ; i++)
    {
        int d = upper_bound(v.begin(), v.end(), v[i]) - v.begin();
        if (d > (n-d)){
            ans++;
        }
    }
    cout<< ans <<'\n';

}
return 0; 

}

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 
 long int n;
 long int N;
 cin >> n ;
int max=0;

// max number find
for (int i = 1; i < n; i++)
 {
    cin >> N ;
    if(N>max){
        max=N;
    }
 }

 cout << max << endl ;
 
 return 0;
 }
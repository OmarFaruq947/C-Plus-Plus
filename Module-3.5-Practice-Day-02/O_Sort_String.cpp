#include<bits/stdc++.h>
using namespace std;

void selectionSort (char *str, long int n){
    for(long int i=0; i<n-1; i++){
        long int mainIndex = i;
        for (long int j=1; j<n; j++){
            if(str[i] < str[mainIndex]){
                mainIndex = j;
            }
        }

        if(mainIndex != i){
            char temp = str[i]
            str[i] = str[mainIndex];
            str[mainIndex] = temp;
        }
    }
}


int main() {
  long int n;
  cin >> n ;
  char *str = new char[n+1];
  cin >> str;

  for (long int i = 0; i < n; i++)
  {
    long int aschii = str[i];
    selectionSort(str, n);
    // sort(str, str+n); 
    // char str2 = str[i];

    cout << str <<"";
  }
  
}

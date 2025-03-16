#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> V;
    // vector<int> V(4);
    // vector<int> V(5,2); // default value zero
    // vector<int> V2(V);

    // int a[6] = {1,2,3,4,5,6};
    // cout<< a+6 <<endl;
    // vector<int> V(a,a+6); // a => first pointer & a+6 => last pointer of array element
    
    // vector<int> V={2, 10, 3};
    //  cout<< V.size() <<endl;




    // capacity

    // // V.clear();
    //  cout<< V.size() <<endl;
    //  cout<< V.max_size() <<endl;
    //  cout<< V.empty() <<endl;
    // //  V.resize(20);
    //  cout<< "ddd" <<endl;
    //  V.push_back(10);
    //  cout<< V.capacity() <<endl;
    //  V.push_back(100);
    //  cout<< V.capacity() <<endl;
    
    
    
    // vector<int> V={1,2,3,7,8,6};
     
    //  V.insert(V.begin() + 2, 100);
    //  V.erase(V.begin() + 2);
    //  replace(V.begin(), V.end(), 2, 100);




    // vector input


    // first method
    // vector<int> V;
    // int n;
    // cin>> n ;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>> x ;
    //     V.push_back(x);
    // }


// second method
    // int n;
    // cin>> n ;
    // vector<int> V(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin>> V[i] ;
    // }





    // vector in string
    int n;
    cin>> n ;
    cin.ignore();
    vector<string> V(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, V[i]);
    }

    // for (int i = 0; i < V.size(); i++){
    //     cout<< V[i] <<endl;
    // } 

    for (string val: V) cout<< val <<endl;
     

    return 0;
};
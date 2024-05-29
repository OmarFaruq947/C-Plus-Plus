#include<bits/stdc++.h>
using namespace std;

int main(){

// string S = "hello world";
// string P = "hello";
// cout << S.size() <<endl; // 11
// cout << S.max_size() <<endl; //1073741823

// if(S == P) cout << "same" <<endl;
// else cout << "not same" << endl;





// capacity
// string A;
// cout << A.capacity() <<endl;
// A="mvsndnrrb rbjnroigwioegkoirgrgmrtgrkegjregrekmlejdmoiregkkkkkkkkkkkkkkkkkkkkkkkk";
// cout << A.capacity() <<endl;
// A="mvsndnrrb rbjnroigwioegkoirgrgmrtgrkegjregrekmlejdmoiregkkkkkkkkkkkdfvjdnfbjbgkjbjfe bfej bjebjekkkkkkkkkkkkkk";
// cout << A.capacity() <<endl;




// clear()
// string B="mcjmksm";
// B.clear();
// cout << B.size() <<endl;
// B="lsnojinjinjj";
// cout << B.size() <<endl;



// empty()
// string C= "hiby nay kai";
// cout << C.empty() <<endl;
// C= "hiby nay kai";
// cout << C.size() <<endl;


// note: what is the deference between clear() and empty()


string Q = "abc_def_ghi";
Q.resize(7);
cout << Q.size() <<endl; // 7

Q.resize(12, 'X');
cout << Q <<endl;



return 0;
}
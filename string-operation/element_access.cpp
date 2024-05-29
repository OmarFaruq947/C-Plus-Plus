#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string S = "the hello_world";
    // cout << S[0] <<endl;  <------------
    // cout << S.at(0) <<endl;
    // cout << S.front() <<endl;

    // last element
    // cout << S[S.size()-1] <<endl;
    // cout << S.back() <<endl; <----------

    // concatenation
    // string A = "hello ";
    // string B = "world";

    // A+=B;
    // cout <<A<<endl;
    // A.append(B);
    // cout <<A<<endl;

    // A += "G";
    // cout << A << endl;

    // A[2] = 'a'; // dont work
    // cout << A << endl;

    // A.push_back('A'); // its working
    // cout << A << endl;

    // A.pop_back();
    // cout << A << endl;

    // A = +"W";
    // cout << A << endl;



    string W="helloWorld";
    // W.erase(4,3);
    // cout << W <<endl;

    W.replace(4,3,"YYY");
    cout << W <<endl;

     W.replace(4,0,"G");
    cout << W <<endl;


    return 0;
}
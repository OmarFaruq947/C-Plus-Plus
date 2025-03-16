// #include<bits/stdc++.h>
// using namespace std;
// int main(){


//     string str = "hello world"; // c++ style

//     cout<< str.size() << endl;
//     cout<< str.max_size() << endl;
//     cout<< str.capacity() << endl;
//     // str.clear();
//     cout<< str.size() << endl;
//     // str.resize(5);
//     cout<< (str.empty() ? "yes" : "No") << endl;

//     cout<<"---string element---"<< endl;
    
//     cout<<str[0]<< endl; // first element
//     cout<<str.at(0)<< endl; // first element
//     cout<<str.front()<< endl; // first element
//     cout<<str.back()<< endl; // last element
    
//     cout<<"---string modifiers---"<< endl;
    
//     str.append(" omar");
//     str+="W";
//     cout<<str<< endl;
//     str.push_back('Z');
//     cout<<str<< endl;
//     str.pop_back();
//     cout<<str<< endl;

//     str.assign("BANGLADESH");
//     cout<< str <<endl;
//     str="BANGLADESH->2.0";
//     cout<< str <<endl;
    
//     str.erase(2,5);
//     cout<< str <<endl;
//     str.replace(5,7, "WWWZA");
//     cout<< str <<endl;
//     str.insert(0, "X");
//     cout<< str <<endl;



//     cout<<"---string iterator---"<< endl;
//     cout<<"---using for loop---"<< endl;
//     // using for loop
//     for (int i = 0; i < str.size(); i++)
//     {
//          cout<< str[i] <<endl;
//     }

//     cout<<"---using begin, end---"<< endl;

//      cout<< *str.begin() <<endl;
//      cout<< *(str.end()-1) <<endl;

//      for (auto i = str.begin(); i < str.end(); i++)
//      {
//          cout<< *i <<endl;
//      }
     


    
    



//     return 0;
// };

//====================================================

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     string s;
    
//     getline(cin, s);
    
//     cout<< s <<endl;
//      cout<< s.max_size() <<endl;


//     return 0;
// };



// ======================================================

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     // sort function

//     string str = "ABCabc12378654";
//     sort(str.begin(), str.end());
//     cout<< str <<endl;


//     for (char c: str){
//          cout<< c <<endl;
//     }


//     return 0;
// };


// ========== reference ==============

// #include<bits/stdc++.h>

// using namespace std;

// void print(string &s){

//  s="world"; 

// }

// int main()

// {

//  string s="hello";

//  print(s); 

//  cout<<s<<endl; 

//  return 0;

// }



// ========== reverse string stream ==============

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     string s;
//     getline(cin, s);
//     stringstream ss;  // this is a object 
//     ss<<s;

//     string word;
//     while(ss>> word){
//          cout<< word <<endl;
//     }


//     return 0;
// };



// ========== function in class ==============

// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
    
//     string name;
//     int age;
//     Person(string name, int age ){
//         this->name=name;
//         this->age=age;
//     };
// };


// int main(){

// Person rakib("rakib", 25);
// Person sakib("Sakib", 25);

// rakib=sakib;



// cout<< rakib.name<<" "<< rakib.age <<endl;

//     return 0;
// };




// ========== array of object ==============

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
    
//     string name;
//     int role;
//     int marks;

// };
// int main(){

//     int n;
//     cin>> n ;
//     cin.ignore();

//     Student a[n];

//     for (int i = 0; i < n; i++)
//     {
//         getline(cin, a[i].name );
//         cin>> a[i].role ;
//         cin>> a[i].marks ;
//         cin.ignore();  // using ignore for getline

//     }

//     for (int i = 0; i < n; i++)
//     {
//          cout<< a[i].name << "  "<< a[i].role << "  "<< a[i].marks <<endl;
//     }
//     return 0;
// };


// ========== find the max value of object ==============

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// int main(){
//     int n;
//     cin>> n ;
//     Student a[n];

//     for (int i = 0; i < n; i++)
//     {
//          cin>> a[i].name>> a[i].roll>> a[i].marks ;
//     }

//     Student mn;
//     mn.marks = INT_MAX;

    
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i].marks < mn.marks){
//             mn = a[i];
//         }
//     }
//     cout<< mn.name<< "  "<< mn.roll << "  "<< mn.marks <<endl;

//     return 0;
// };



// ========== counting sort ==============

#include<bits/stdc++.h>
using namespace std;
int main(){
   
double b=5.55;
    string s;
     cin>> s ;
     int frq[26]={0};

     for (char c:s){
        frq[c-'a']++;
     }

     for (char i='a'; i<= 'z'; i++){
        for(int j=0; j< frq[i-'a']; j++){
             cout<< i <<endl;
        }
     }


    return 0;
};





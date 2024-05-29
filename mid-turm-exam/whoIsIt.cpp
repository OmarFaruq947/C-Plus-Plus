#include<bits/stdc++.h>
using namespace std;
class student{
    public:

    int id;
    char name[101];
    char section;
    int marks;

};
int main(){
int iteration;
cin >> iteration;

for (int i = 0; i < iteration; i++)
{
    student sakib, rakib, akib;
    cin >> sakib.id >> sakib.name >> sakib.section >> sakib.marks;
    cin >> rakib.id >> rakib.name >> rakib.section >> rakib.marks;
    cin >> akib.id >> akib.name >> akib.section >> akib.marks;


    int maximum_marks = max({sakib.marks, rakib.marks, akib.marks});

    if (maximum_marks == sakib.marks)
    {
        cout <<sakib.id<< " "<<sakib.name << " "<<sakib.section<<" "<<sakib.marks;
    }else if(maximum_marks == rakib.marks){
        cout <<rakib.id<< " "<<rakib.name << " "<<rakib.section<<" "<<rakib.marks;
    }else{
        cout <<akib.id<< " "<<akib.name << " "<<akib.section<<" "<<akib.marks;
    }
    cout <<endl;
    
}

return 0;
}
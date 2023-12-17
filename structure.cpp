// In C++, a structure is a user-defined data type that allows the
// grouping of variables of different data types under a single name.

#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    bool gender;  // 0 is for male and 1 is for female
};

int main()
{
    student a;
    a.name = "hamza";
    a.age = 22;
    a.gender = 0;

    student b;
    b.name = "amna";
    b.age = 40;
    b.gender = 1;

    student c;
    c.name = "tayyab";
    c.age = 21;
    c.gender = 0;

    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<a.gender<<endl<<endl;

    cout<<b.name<<endl;
    cout<<b.age<<endl;
    cout<<b.gender<<endl<<endl;

    cout<<c.name<<endl;
    cout<<c.age<<endl;
    cout<<c.gender<<endl<<endl;
    
    
    return 0;
}
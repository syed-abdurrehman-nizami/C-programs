// In C++, a union is a user-defined data type that allows different
// data types to be stored in the same memory location.

#include<iostream>
using namespace std;
typedef union student_of_unique_school
{
    int classroom;
    int staffroom;

} st;

int main()
{
    st a,b,c,d,e;

    a.classroom = 10;  // chose one of classroom and staffroom
    b.staffroom = 12;
    c.staffroom = 56;
    d.classroom = 123;
    e.staffroom = 98;

    cout<<a.classroom <<endl;
    cout<<b.staffroom <<endl;
    cout<<c.staffroom <<endl;
    cout<<d.classroom <<endl;
    cout<<e.staffroom <<endl;

    return 0;
}
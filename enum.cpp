// In C++, an enum (enumeration) is a user-defined data type used to assign 
// names to integral constants, making code more readable and maintainable.

#include<iostream>
using namespace std;
int main()
{
    enum car {civic, alto , kia , city , sportage};
    car a = kia;
    car b = sportage;

    cout<<a<<endl;  // print 2 because kia is present at 2th index.
    cout<<b<<endl;  // print 4 
    
    return 0;
}
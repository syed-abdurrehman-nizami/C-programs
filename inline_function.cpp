// An inline function in C++ is a small, simple function
// that, instead of being called like a regular function,
// is directly inserted or "inlined" at the point where
// it is called, saving the overhead of a function call.

#include<iostream>
using namespace std;
inline int product(int a,int b)
{
    return a*b;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers.";
    cin>>n1>>n2;

    cout<<endl<<"Answer is : "<<product(n1,n2);
    cout<<endl<<"Answer is : "<<product(n1,n2);
    cout<<endl<<"Answer is : "<<product(n1,n2);
    cout<<endl<<"Answer is : "<<product(n1,n2);
    
    return 0;
}
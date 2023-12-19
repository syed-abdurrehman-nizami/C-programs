// A static variable in C++ is a type of variable that retains its 
// value throughout the program's execution and is shared among all 
// instances of the class or function where it is declared.

#include<iostream>
using namespace std;
int product(int a,int b)
{
    static int c = 5;   // this line can run only one time and c retains it value
    c = c + 5;
    return a*b+c;
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
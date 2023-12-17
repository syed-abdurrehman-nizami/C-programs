// In this program i make function prototype and discuss other concepts

#include<iostream>
using namespace std;
int sum(int , int);   // called functon prototype
int main()
{
    int n1,n2;
    cout<<"Enter numbers : ";
    cin>>n1>>n2;

    // n1 and n2 are Actual parameter
    cout<<"The sum is : "<<sum(n1,n2);
    
    return 0;
}
int sum(int a,int b)     // It takes two arguments.
{
    // a and b are Formal parameter
    int c = a+b;
    return c;
}
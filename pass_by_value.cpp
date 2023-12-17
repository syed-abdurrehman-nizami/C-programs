// In this program i simple pass values and it is called pass by value function.

#include<iostream>
using namespace std;
int sum(int , int); 
int main()
{
    int n1,n2;
    cout<<"Enter numbers : ";
    cin>>n1>>n2;

    cout<<"The sum is : "<<sum(n1,n2);
    
    return 0;
}
int sum(int a,int b)    
{
    int c = a+b;
    return c;
}
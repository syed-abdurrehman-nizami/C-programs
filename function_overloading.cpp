// Function overloading in C++ refers to the ability to define multiple functions 
// with the same name in the same scope, but with different parameter lists.

#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}

int sum(int a,int b,int c,int d)
{
    return a+b+c+d;
}

int sum(int a,int b,int c,int d,int e)
{
    return a+b+c+d+e;
}

int main()
{
    A:
    cout<<"How many numebrs you add (maximum 5): ";
    int n;
    cin>>n;

    if(n<2 || n>5)
    {
        cout<<"Please atleast add two numbers and atmost 5 numbers."<<endl;
        goto A;
    }
    int n1,n2,n3,n4,n5,ans;
    cout<<"Enter "<<n<<" numbers : ";
    switch (n)
    {
    case 2:
        cin>>n1>>n2;
        ans = sum(n1,n2);
        break;
    
    case 3:
        cin>>n1>>n2>>n3;
        ans = sum(n1,n2,n3);
        break;
    
    case 4:
        cin>>n1>>n2>>n3>>n4;
        ans = sum(n1,n2,n3,n4);
        break;
    
    default:
        cin>>n1>>n2>>n3>>n4>>n5;
        ans = sum(n1,n2,n3,n4,n5);
        break;
    };

    cout<<"The sum is = "<<ans;
    
    return 0;
}
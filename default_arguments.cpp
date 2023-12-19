// In this program i give default arguments to the function

#include<iostream>
using namespace std;
int addition(int a, int b=10, int c=20, int d=30)
{
    return a+b+c+d;
}
int main()
{
    cout<<"How many numbers you enter (maximum 4 minimum 1): ";
    int n;
    cin>>n;

    int n1,n2,n3,n4;

    if(n==4)
    {
        cout<<"Enter 4 numbers : ";
        cin>>n1>>n2>>n3>>n4;
        cout<<"Sum is : "<<addition(n1,n2,n3,n4); // overwrite 3 arguments and take 0 default
    }
    else if(n==3)
    {
        cout<<"Enter 3 numbers : ";
        cin>>n1>>n2>>n3;
        cout<<"Sum is : "<<addition(n1,n2,n3); // overwrite 2 arguments and take 1 default
    }
    else if(n==2)
    {
        cout<<"Enter 2 numbers : ";
        cin>>n1>>n2;
        cout<<"Sum is : "<<addition(n1,n2); // overwrite 1 arguments and take 2 default
    }
    else
    {
        cout<<"Enter 1 numbers : ";
        cin>>n1;
        cout<<"Sum is : "<<addition(n1); // overwrite 0 arguments and take 3 default
    }

    return 0;
}
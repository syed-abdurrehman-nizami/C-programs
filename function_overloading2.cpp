// In this program i give parameter to function of different datatype

#include<iostream>
using namespace std;
float sum(float a,int b)
{
    return a+b;
}

float sum(int a,int b,int c)
{
    return a+b+c;
}

float sum(float a,int b,float c,int d)
{
    return a+b+c+d;
}

int main()
{
    int n1=2, n2=8;
    float n3=5.5, n4=10.8;

    cout<<"Sum of n1, n4 and n3 = "<<sum(n1,n4,n3)<<endl;  // print 17
    cout<<"Sum of n1 and n4 = "<<sum(n1,n4)<<endl;  // print 12
    cout<<"Sum of n1, n2 n3 and n4 and n= "<<sum(n1,n2,n3,n4)<<endl;  // print 25.5

    return 0;
}
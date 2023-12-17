// In this i make function pass by reference using pointers

#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int tem = *a;
        *a = *b;
        *b = tem;
}
int main()
{
    int n1,n2;
    cout<<"Enter numbers : ";
    cin>>n1>>n2;

    swap(&n1,&n2);
    cout<<endl;
    cout<<n1<<endl<<n2;
    
    return 0;
}
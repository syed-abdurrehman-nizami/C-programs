// How to print the address of all the indexes of an array and values of an array.

#include<iostream>
using namespace std;
int main()
{
    int array[5];
    cout<<"Enter values : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }

    int *ad = array;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Address of index array["<<i<<"] is : "<<ad+i<<endl;
    }
  
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value at index array["<<i<<"] is : "<<*(ad+i)<<endl;
    }
    
    return 0;
}
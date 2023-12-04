//  search a number in an array using linear search

#include  <iostream>
using namespace std;
int linearsearch(int a[] , int size , int key)
{
    for (int i = 0; i < size; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1; 
}
int main () 
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the numbers of array : ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int search_number;
    cout<<"Enter a number you want to search : ";
    cin>>search_number;

    int index = linearsearch(arr,n,search_number);
    
    if (index == -1)
    {
        cout<<"Your number is not present in array.";
    }
    else 
    {
        cout<<"Your number is present at index : "<<index;
    }

    return 0;
}
//  search a number in an array using binary search

#include <iostream>
using namespace std;
int binarysearch(int a[], int s, int e, int key)
{
    int mid = (s + e) / 2;

    if (s <= e)
    {
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
            binarysearch(a, s, e, key);
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
            binarysearch(a, s, e, key);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers of array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search_number;
    cout << "Enter a number you want to search : ";
    cin >> search_number;

    int index = binarysearch(arr, 0, n, search_number);

    if (index == -1)
    {
        cout << "Your number is not present in array.";
    }
 
    else
    {
        cout << "Your number is present at index : " << index;
    }

    return 0;
}

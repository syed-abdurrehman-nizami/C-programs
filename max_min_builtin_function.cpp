// How to find maximum and minimum number in an array through builtin functions

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxno = INT_MIN;
    int minno = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, arr[i]);
        minno = min(minno, arr[i]);
    }

    cout << "maximum number is = " << maxno << endl;
    cout << "minimum number is = " << minno << endl;

    return 0;
}
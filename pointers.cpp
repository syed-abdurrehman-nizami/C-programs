// pointers is a datatype which can store the address of other datatype variable and constant.
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *b = &a; // b store address of a

    cout << b << endl;
    cout << *b << endl; // print the value at stored address

    a = 15;
    cout << b << endl;
    cout << *b << endl;

    const float abc = 3.15;
    const float *xyz = &abc;

    cout << xyz << endl;  // print the address of abc
    cout << *xyz << endl; // print the value at stored address

    return 0;
}
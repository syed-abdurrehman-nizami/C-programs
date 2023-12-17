// pointer to pointer is datatype which can store the address of only pointer variable or constant.

#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    cout<<a<<endl;     // print value of a
    cout<<b<<endl;     // print address of a
    cout<<*b<<endl;    // print value at stored address.
    cout<<c<<endl;     // print address of b
    cout<<*c<<endl;    // print address which is stored in b
    cout<<**c<<endl;   // Reach the address stored in b then print the value present at that address

    cout<<endl<<endl;
    cout<<"Adderss of a : "<<b<<endl;
    cout<<"Adderss of b : "<<c<<endl;
    cout<<"Adderss of c : "<<d<<endl;

    cout<<endl;
    cout<<d<<endl;      // print address of c
    cout<<*d<<endl;     // print address of b
    cout<<**d<<endl;    // print address of a
    cout<<***d<<endl;   // print the value of a

    return 0;
}
#include <iostream>
using namespace std;
int main()
{

    int a = 13;
    float b = 12.5;
    string c = "hamza";
    bool d = true;
    long e = 12345678;
    double f = 123.123456;
    long double g = 123456789876;
    long long h = 1234567898765432;

    cout << sizeof(a) << endl; // 4 bytes
    cout << sizeof(b) << endl; // 4 bytes
    cout << sizeof(c) << endl; // 24 bytes
    cout << sizeof(d) << endl; // 1 bytes
    cout << sizeof(e) << endl; // 4 bytes
    cout << sizeof(f) << endl; // 8 bytes
    cout << sizeof(g) << endl; // 12 bytes
    cout << sizeof(h) << endl; // 8 bytes

    cout << sizeof(12) << endl;    // int  4 bytes
    cout << sizeof(12.5) << endl;  // double   8 bytes
    cout << sizeof(12.5F) << endl; // float   4 bytes
    cout << sizeof(12.5f) << endl; // float   4 bytes
    cout << sizeof(12.5L) << endl; // long double  12 bytes
    cout << sizeof(12.5l) << endl; // long double  12 bytes

    return 0;
}
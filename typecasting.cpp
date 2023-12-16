// In typecasting we can change the datatype of variables.
#include<iostream>
using namespace std;
int main () {
    int a = 10;
    float b = 10.5;

    cout<<float(a)<<endl;  // 10
    cout<<(float)a<<endl;  // 10

    cout<<int(b)<<endl;   // 10
    cout<<(int)b<<endl;   // 10

    int c = int(b);

    cout<<c<<endl;  // 10

    cout<<a+b<<endl;  // 20.5
    cout<<a+(int)b<<endl;  // 20 

    return 0;

}
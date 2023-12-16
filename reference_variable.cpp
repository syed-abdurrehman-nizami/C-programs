//  In reference variable if you change one variable than the
//  reference variable of that variable also change.
#include<iostream>
using namespace std;
int main () {
    int x = 15;
    int &y = x;
    cout<<x<<endl;  //  15
    cout<<y<<endl;  //  15

    x = 20;
    cout<<y<<endl;  // 20

    y = 15;
    cout<<x<<endl;  // 15
    cout<<y<<endl;  // 15

    return 0;

}
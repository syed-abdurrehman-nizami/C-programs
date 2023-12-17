//  In this program we can make aaray of objects of structure and 
//  make short keyword of structure name with the help of typedef.

#include<iostream>
using namespace std;
typedef struct students_of_punjab_college
{
    string name;
    int age;

}stu;

int main()
{
    stu arr[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Name : ";
        cin>>arr[i].name;
        cout<<"Enter Age : ";
        cin>>arr[i].age;
    }
    cout<<endl<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<endl;
        cout<<arr[i].age<<endl<<endl;
    }

    return 0;
}
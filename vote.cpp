#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"ENTER YOUR AGE:-";
    cin>>age;

    if(age>=18)
    {
        cout<<"YOU ARE ELIGIBLE FOR VOTING";
    }
    else
    {
        cout<<"YOU ARE NOT ELIGIBLE VOTING";
    }

    return 0;
}
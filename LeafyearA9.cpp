#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"ENTER THE YEAR";
    cin>>year;
    if(year%4==0)
    {
       cout<<year<<" IS LEAF YEAR";
    }
    else
    {
       cout<<year<<"YEAR IS NOT LEAF YEAR";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"ENTER THE NUMBER:";
    cin>>num;
    for(int i=1;i<=num;i++){
       fact=fact*i;
    }
    
        cout<<num<<"!"<<"="<<fact;
    
    return 0;
}
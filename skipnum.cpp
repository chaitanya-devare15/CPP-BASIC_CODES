#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter number";
    cin>>i;
    for(int p=1;p<=10;p++){
        if(p==i)
        continue;
        cout<<p<<endl;
        
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int length,height,breath,volume;

    cout<<"Enter Length:-";
    cin>>length;

    cout<<"Enter Height:-";
    cin>>height;

    cout<<"Enter Breath:-";
    cin>>breath;
     
     volume=length*breath*height;

     cout<<"VOLUME OF CUBOID IS "<<volume<<"CM^3";
    
    return 0;
}
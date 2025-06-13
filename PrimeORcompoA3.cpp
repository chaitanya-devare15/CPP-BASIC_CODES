#include<iostream>
using namespace std;
int main()
{
    int i, n, p;
    cout<<"Enter a Number:";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
          p++;
        }
    }
    if(p==0)
    {
        cout<<"This number is prime number";
    }
    else
    {
      cout<<"This number is Composite number";
    }
    return 0;
}
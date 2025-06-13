 
#include<iostream>
using namespace std;
int main()
{
    int n;
      
      cout<<"Enter The Number:-";
      cin>>n; 
      int sum=0,i=1;
      while(i<=n) 
      {
         sum=i+sum;
        i++;
      }
           cout<<"sum is "<<sum;
           
      return 0;
}

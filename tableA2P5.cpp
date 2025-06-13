#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter number for table:-";
    cin>>n;
    do
    {
      cout<<i<<"X"<<n<<"="<<i*n<<endl;
      i++;
      
    }while(i<=10);
    
    return 0;
}
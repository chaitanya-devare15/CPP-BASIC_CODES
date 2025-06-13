#include<iostream>
using namespace std;
int main()
{
int num1, num2, num3;
cout<<"Enter Three Numbers:";
cin>>num1>>num2>>num3;
if(num1==num2 && num1==num3)
{
    cout<<num1<<"="<<num2<<"="<<num3<<"IS EQUAL NUMBER";
}
else if(num1>num2 && num1>num3)
{
   cout<<num1<<"IS LARGEST NUMBER";
}
else if(num2>num1 && num2>num3)
{
 cout<<num2<<"IS LARGEST NUMBER";
}
else if(num3>num1 && num3>num2)
{
  cout<<num3<<"IS LARGEST NUMBER";
}
else if(num1==num2)
{
  cout<<num1<<"="<<num2<<" BOTH  LARGEST NUMBER THAN "<<num3;
}
else if(num1==num3)
{
  cout<<num1<<"="<<num3<<" BOTH  LARGEST NUMBER THAN "<<num2;
}
else if(num2==num3)
{
  cout<<num2<<"="<<num3<<" BOTH  LARGEST NUMBER THAN "<<num1;
}
return 0;
}


#include<iostream>
using namespace std;
int main(){
    int num1,num2,ans;
    cout<<"Enter the number1-:";
    cin>>num1;

    cout<<"Enter the number2-:";
    cin>>num2;

      ans=num1+num2;
     cout<<num1<<"+"<<num2<<"="<<ans<<endl;
      cout<<"ADDITION IS "<<ans<<endl;
      
      ans=num1-num2;
     cout<<num1<<"-"<<num2<<"="<<ans<<endl;
       cout<<"SUBSTRACTION IS "<<ans<<endl;
       
      ans=num1*num2;
     cout<<num1<<"*"<<num2<<"="<<ans<<endl;
       cout<<"MULTIPLICATION IS "<<ans<<endl;
       
      ans=num1/num2;
     cout<<num1<<"/"<<num2<<"="<<ans<<endl;
       cout<<"DIVISION IS "<<ans<<endl;
    return 0;
}
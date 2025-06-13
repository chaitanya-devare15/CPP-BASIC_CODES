#include<iostream>
using namespace std;
int main()
{
    int num,sqr;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=num;i++){

        for(int j=i;j<=i;j++){
        sqr=i*i;
        }
        cout<<"SQUARE OF "<<i<<" = "<<sqr<<endl;
    }
     

    return 0;
}
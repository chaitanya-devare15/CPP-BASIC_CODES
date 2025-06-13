#include<iostream>
using namespace std;
int fibonacci(int i){
	if(i<=1){
		return i;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}
int main(){
	int n;
	cout<<"Enter a Number : ";
	cin>>n;
	
	cout<<"Fibonacci Series : "<<endl;
	for(int i=0;i<n;i++){
		cout<<fibonacci(i)<<endl;
	}
return 0;
}

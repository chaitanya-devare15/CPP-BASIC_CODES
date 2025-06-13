#include<iostream>
using namespace std;
int main(){
    int arr[]={12,13,14,15,19};
    int len=sizeof(arr)/sizeof(int);
   // cout<<len<<" ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    bool g=true;
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                g = false;
            }
            
        }
        if(g==true){
            cout<<"array is sorted ";
            break;
        }   
    }
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

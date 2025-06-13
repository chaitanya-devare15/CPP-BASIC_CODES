#include<iostream>
using namespace std;
void display(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}// tt element first sort 
void selectionSort(int arr[], int len){
    for(int i=0; i<len; i++){
        int min = INT32_MAX;
        int mindex = -1;
        for(int j =i; j<len;j++){
            if(min>arr[j]){
                min = arr[j];
                mindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex]=temp;
    }
}
int main(){
    int arr[] = {12,23,54,77,20,2,33,23};
    int len = sizeof(arr)/sizeof(int);
    
    display(arr, len);
    selectionSort(arr, len);
    display(arr, len);
}
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i =0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
int printArray(int arr[], int n){
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){
    int n = 10;
    int arr[]={1,2,4,3,5,8,10,7,6,9};
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
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
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}
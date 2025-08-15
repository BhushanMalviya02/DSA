#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i =1;i<n;i++){
        int current=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>current ){
            arr[prev+1]=arr[prev];
            prev--;

        }

        arr[prev+1]=current;
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
    int arr[]={1,2,8,3,5,7,10,4,6,9};
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
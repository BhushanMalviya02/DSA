#include<iostream>
#include<vector>
using namespace std;

int isSort(vector<int> arr,int n){
    if(n==0 || n==1)return true;

    return arr[n-1]>arr[n-2] && isSort(arr,n-1);
}

int main (){
    vector<int> arr={1,2,3,9,15};
    int n=5;
    cout<< isSort(arr,n);
}
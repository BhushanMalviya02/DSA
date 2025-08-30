#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int n,int target,int st,int end){
    if(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]> target){
         return binarySearch(arr,n,target,st,mid-1);
    }else{
        return binarySearch(arr,n,target,mid+1,end);
    }

}
return -1;}

int main (){
    vector<int> arr={1,2,3,9,15};
    int n=5;
    int target=9;
    int st=0,end=n-1;
    cout<< binarySearch(arr,n,target,st,end);
}
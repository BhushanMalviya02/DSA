#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10]={1,-2,3,-4,5,-10,34,-12};
    int n=5;
    int maxSum=INT_MIN;

    for(int start =0;start<n;start++){
        int currentSum=0;
        for(int end=start;end<n;end++){
            currentSum+=arr[end];
            maxSum=max(currentSum,maxSum);
            
        }
    }
        cout<<maxSum;


    return 0;

}
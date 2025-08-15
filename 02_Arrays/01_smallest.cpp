#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[5];
    int index=0;
    int smallest=INT_MAX;
    int sz=sizeof(nums)/sizeof(int);
    for (int i=0;i<sz;i++){
        cout<<"enter the number :";
        cin>>nums[i];
    }
    for (int i=0;i<sz;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index=i;
        }
    }
    cout<<"the smallest value in array is "<<smallest<<endl;
    cout<<"index on which smallest value is "<<index;




}

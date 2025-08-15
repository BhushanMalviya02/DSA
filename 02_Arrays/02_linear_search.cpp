#include<iostream>
using namespace std;

int checkTarget(int nums[], int sz,int target){
     for (int i=0;i<sz;i++){
        if(nums[i]==target){
            cout<<"the index at which we get the target is "<<" ";
            return i;
        }
        
    }

    return -1;
}

int main(){
    int nums[5];
    int index=0;
    int target;

    int sz=sizeof(nums)/sizeof(int);
    for (int i=0;i<sz;i++){
        cout<<"enter the number :";
        cin>>nums[i];
    }
    cout<<"enter the target :";

    index=checkTarget(nums,sz,target);
    cout<<index;
}


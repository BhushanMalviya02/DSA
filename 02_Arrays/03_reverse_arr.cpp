#include<iostream>
using namespace std;



int main(){
    int nums[5];
    int start=0;
    int end=4;
    
    for (int i=0;i<5;i++){
        cout<<"enter the number :";
        cin>>nums[i];
    }

    while(start<end ){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    
    for (int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}


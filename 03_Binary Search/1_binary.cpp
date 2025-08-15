#include<iostream>
#include<vector>
using namespace std;

int binarySearch(const vector<int> &nums,int target){
    int start=0;
    int end=nums.size()-1;
      while(start<=end){
        int mid=start+(end-start)/2;
        
        if(nums[mid]>target){
            end=mid-1;
        }else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            return mid;
          
            
        }
    }
    return -1;

}

int main (){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int target=33;
    int index=binarySearch(nums,target);
    cout<<index;

}
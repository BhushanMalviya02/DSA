#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int > vec1={1,2,3,4,5,6,7,8};
    int target;
    int index;

    cout<<"enter the target :";
    cin>>target;

    for(int i=0;i<vec1.size();i++){
        if(vec1[i]==target){
            cout<<"target found at "<<i; 
        }
    }

}
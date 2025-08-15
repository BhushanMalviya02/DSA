#include<iostream>
#include<vector>
using namespace std;

int vecRev(vector<int> &vec1,int start,int end){ 
            while(start<end){
                swap(vec1[start],vec1[end]);
                start++;
                end--;
            }        }

int main(){
    vector<int> vec1={1,23,34,534,56,78,99};
    int start=0;
    int end=vec1.size()-1;
    vecRev(vec1,start,end);
    for(int i:vec1){
        cout<<i<<" ";
    }
}
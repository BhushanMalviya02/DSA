#include<iostream>
using namespace std;
int main (){
    int arr[10]={1,1,2,2,33,3,4,7,7};
    int size=10;
    for(int i=0;i<size;i++){
            bool isUnique=true;
        for(int j=0;j<size;j++){
            if((i!=j) && (arr[i]==arr[j])){
                isUnique=false;
                
            }
        }
    if(isUnique){
        cout<<arr[i]<<" ";
    }
    }
return 0;
}
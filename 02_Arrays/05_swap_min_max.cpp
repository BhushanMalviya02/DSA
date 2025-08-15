#include<iostream>
#include<climits>
using namespace std;

 
int main(){
    int n;
    cout<<"enter the number of elements in array :";
    
    cin>>n;
    
    int arr[n];
    int min=INT_MAX;
    int mindex=0,maxdex=0;
    int max=INT_MIN;

    for (int i=0;i<n;i++){
        cout<<"enter the element :";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            mindex=i;
        }
        else if(arr[i]>max){
            max=arr[i];
            maxdex=i;
        }
    }
    swap(arr[mindex],arr[maxdex]);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
  
   

return 0;
}
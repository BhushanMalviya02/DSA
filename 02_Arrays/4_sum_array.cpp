#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the number of elements in array :";
    cin>>n;
    int arr[n];
    int sum=0,product=1;

    for (int i=0;i<n;i++){
        cout<<"enter the element :";
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout<<"the sum of elements in array is "<<sum<<endl;
    cout<<"the product of elements in array is "<<product<<endl;

return 0;
}
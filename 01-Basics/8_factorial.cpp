#include<iostream>
using namespace std;

int main (){
    int n,factorial=1;
    cout<<"enter the number :";
    cin>>n;

    for(int i=1;i<=n ;i++){
        factorial*=i;

    }
    cout<<factorial;

    return 0;
}
#include<iostream>
using namespace std;


int fact(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial*=i;
        // cout<<factorial;
    }
        return factorial;


}

int main(){
    int n ,r,nCr,k;
    cout<<"enter the value of n :";
    cin>>n;
    cout<<"enter the value of r :";
    cin>>r;
    k=n-r;

    nCr=fact(n)/(fact(r)*fact(k));
    cout<<"binomial coefficient :"<<nCr<<endl;


}
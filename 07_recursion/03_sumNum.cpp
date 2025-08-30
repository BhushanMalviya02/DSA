#include<iostream>
using namespace std;

int sumNUm(int n){
    if(n==1){
        return 1;

    }
    return n + sumNUm(n-1);
}

int main (){
    int n ;
    cout<<"enter ";
    cin>>n;
    cout<< sumNUm(n);
}
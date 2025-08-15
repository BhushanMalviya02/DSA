#include<iostream>
using namespace std;

void isPrime(int n){
bool prime=true;

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
            

        }


    }

    if(prime==true){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    

}

int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    isPrime(n);
}




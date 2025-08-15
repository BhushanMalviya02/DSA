#include <iostream>
using namespace std ;

int main (){
    int n;
    bool isPrime=true;

    cout<<"enter the number :";
    cin>>n;
    for (int i=2;i<n;i++){
        if(n% i ==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout <<"prime ";
    }else{
        cout<<"not Prime";
    }
return 0;
}
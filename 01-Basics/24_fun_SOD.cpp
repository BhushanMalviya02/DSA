#include<iostream>
using namespace std;


int sumOfDigit(int num){

    int digitSum=0;

    while(num>0){
        int lastDigit=num%10;
        num/=10;

        digitSum+=lastDigit;
    }
    return digitSum;

}
int main(){
    int num ;
    cout<<"enter the number :";
    cin>>num;

    cout<<"sum :"<< sumOfDigit(num) <<endl;


}


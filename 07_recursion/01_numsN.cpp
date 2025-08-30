#include<iostream>
using namespace std;

void printNum(int n){
    if(n==1){
        cout<<1;
        return;
    } 
    cout<< n<< endl;
     printNum(n-1);

}
int main(){
    int n;
    cin >> n;
    printNum(n);
    return 0;
}
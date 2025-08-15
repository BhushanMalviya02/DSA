#include<iostream>

using namespace std;



int biToDecimal(int biNum){
    int ans=0,pow=1;
    while(biNum >0){
        int rem=biNum%10;
        ans+=rem*pow;

        biNum/=10;
        pow*=2;
    }

    return ans;
}
int main(){
    int biNum;
    cout<<"enter the number :";
    cin>>biNum;

    
        cout<<biToDecimal(biNum)<<endl;
    

}
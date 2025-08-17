#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPallindrome(string str){
    string str2=str;
    reverse(str.begin(),str.end());
    if(str==str2){
        return true;
    }else{return false;}
}
int main(){
    string str="ab55ba4";   
    if(isPallindrome(str)){
        cout<<"Yes" <<endl;
    }else{
        cout<<"No"<<endl;
    }
}
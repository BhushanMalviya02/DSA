#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=i-1;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;




    }

  

return 0;
}



// i = 0   n-i
// i = 1   n-1
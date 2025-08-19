#include<iostream>
using namespace std;

int main(){
    int matrix[3][4]={{1000,200,3,50},{4,5,600,100},{7,8,9,12}};
    int maxsum=0;
    int row=3,col=4;
    for(int i=0;i<col;i++){
    int sum=0;
        for(int j=0;j<row;j++){
            sum+=matrix[j][i];
        }
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum;
}



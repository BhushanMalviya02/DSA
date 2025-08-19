#include<iostream>
using namespace std;

int main(){
    int matrix[3][4]={{1,2,3,50},{4,5,6,100},{7,8,9,12}};
    int maxsum=0;
    int row=3,col=4;
    for(int i=0;i<row;i++){
    int sum=0;
        for(int j=0;j<col;j++){
            sum+=matrix[i][j];
        }
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum;
}
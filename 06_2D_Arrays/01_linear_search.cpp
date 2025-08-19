#include<iostream>
using namespace std;
int main (){
    int matrix[4][3];
    int rows=4,col=3;
    pair<int,int>p={-1,-1};
    int target =8;
    for(int i =0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<"enter the element :";
            cin>>matrix[i][j];
        }
    }
    for(int i =0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==target){
                p={i,j};
                cout<<p.first <<" "<<p.second;
            }
                           

        }
    }
}
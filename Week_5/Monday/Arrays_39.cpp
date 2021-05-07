#include<iostream>
using namespace std;

void printMatrix(int matrix[][4]){
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[5][4];
    int count=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            matrix[i][j]=count++;
        }
    }
    printMatrix(matrix);
    cout<<endl;
    for(int i=0;i<5;i++){
        int start=i;
        int end=0;
        while(start+1){
            cout<<matrix[start][end]<<" ";
            start--;
            end++;
        }
        cout<<endl;
    }
    for(int i=1;i<4;i++){
        int start=4;
        int end=i;
        while(end<4){
            cout<<matrix[start][end]<<" ";
            start--;
            end++;
        }
        cout<<endl;
    }
}
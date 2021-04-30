#include<iostream>
using namespace std;



int main(){
    int r=5,c=5;
    int arr[5][5],k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            arr[i][j]=k++;
    }
    cout<<"Original array:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\n\nSpiral: ";
    int top=0,right=c-1,bottom=r-1,left=0;
    while(top<bottom&&left<right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }
}
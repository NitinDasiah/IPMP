#include<iostream>
using namespace std;

int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"\t";
    }
}

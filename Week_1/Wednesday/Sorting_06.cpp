#include<iostream>
#include<vector>
using namespace std;


void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int parition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


int quickSort(int arr[], int low, int high){
    if(low<high){
        int mid=parition(arr, low, high);
        quickSort(arr,low,mid-1);
        quickSort(arr,mid+1,high);
    }
}


int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

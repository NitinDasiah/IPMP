#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    vector<int> arr1,arr2;
    for(int i=0;i<n1;i++){
        arr1.push_back(arr[l+i]);
    }
    for(int i=0;i<n2;i++){
        arr2.push_back(arr[m+1+i]);
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=arr2[j];
        j++;
        k++;
    }  
}

void mergeSort(int arr[],int low, int high){
    if(low>=high){
        return;
    }
    int mid=(low+(high-1))/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[], int n, int i){
    int largest=i;
    int leftChild=2*i+1;
    int rightChild=2*i+2;
    if(leftChild<n&&arr[leftChild]>arr[largest]){
        largest=leftChild;
    }
    if(rightChild<n&&arr[rightChild]>arr[largest]){
        largest=rightChild;
    }
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    for(int i=n/2 -1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapSort(arr,n);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"\t";
    }
}

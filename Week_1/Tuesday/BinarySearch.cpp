#include<iostream>
using namespace std;

int binarySearch(int arr, int low, int high, int item){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==item){
        return mid;
    }
    else if(arr[mid]>item){
        binarySearch(arr,low,mid-1,item);
    }
    else{
        binarySearch(arr,mid+1,high,item);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item;
    cin>>item;
    cout<<binarySearch(arr,0,n-1,item);
}
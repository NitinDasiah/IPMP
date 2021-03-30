#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int low, int high){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid){
            return mid;
        }
        else if(arr[mid]<mid){
            return binarySearch(arr,mid+1,high);
        }
        else{
            return binarySearch(arr,low,mid-1);
        }
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        arr.push_back(item);
    }
    cout<<binarySearch(arr,0,n-1);
}
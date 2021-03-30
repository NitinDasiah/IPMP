#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int low, int high){
    if(low<=high){
        int mid=(low+high)/2;
        if((mid!=0)&&(mid!=arr.size()-1)&&(arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1])){
            return mid;
        }
        else if((mid==0)&&(mid!=arr.size()-1)&&arr[mid]>arr[mid+1]){
            return 0;
        }
        else if((mid!=0)&&(mid==arr.size()-1)&&(arr[mid]>=arr[mid-1])){
            return arr.size()-1;
        }
        else if(low==high){
            return low;
        }
        else if((mid!=0)&&(mid!=arr.size()-1)&&(arr[mid]>arr[mid-1])&&(arr[mid]<arr[mid+1])){
            return binarySearch(arr,mid+1,high);
        }
        else if((mid==0)&&(mid!=arr.size()-1)&&(arr[mid]<arr[mid+1])){
            return binarySearch(arr,mid+1,high);
        }
        else if((mid!=0)&&(mid==arr.size()-1)&&(arr[mid]<arr[mid-1])){
            return binarySearch(arr,low,mid-1);
        }
        else if((mid!=0)&&(mid!=arr.size()-1)&&(arr[mid]<arr[mid-1])&&(arr[mid]>arr[mid+1])){
            return binarySearch(arr,low,mid-1);
        }
        else 
            return -1;
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
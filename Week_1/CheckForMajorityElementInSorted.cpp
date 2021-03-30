#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int item){
    if(low<=high){
        int mid=(low+high)/2;
        if(mid==0&&arr[mid]==item){
            return mid;
        }
        else if((mid!=0)&&(arr[mid]==item&&arr[mid-1]!=item)){
            return mid;
        }
        
        else if((mid!=0)&&(arr[mid]==item&&arr[mid-1]==item)){
            return binarySearch(arr,low,mid-1,item);
        }
        else if(arr[mid]<item){
            return binarySearch(arr,mid+1,high,item);
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
    cin>>item;
    int start=binarySearch(arr,0,n-1,item);
    int end=start + (n/2);
    if(arr[end]==arr[start]){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
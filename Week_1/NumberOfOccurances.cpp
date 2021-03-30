#include<iostream>
#include<vector>
using namespace std;

int binarySearchLower(vector<int>& arr, int low, int high, int item){
    int n=arr.size();
    if(item>arr[n-1]){
        return -1;
    }
    if(item<arr[0]){
        return -1;
    }
    if(low<=high){
        int mid=(low+high)/2;
        if(mid==0&&arr[mid]==item){
            return mid;
        }
        else if((mid!=0)&&(arr[mid]==item&&arr[mid-1]!=item)){
            return mid;
        }
        
        else if((mid!=0)&&(arr[mid]==item&&arr[mid-1]==item)){
            return binarySearchLower(arr,low,mid-1,item);
        }
        else if(arr[mid]<item){
            return binarySearchLower(arr,mid+1,high,item);
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
    int lower=binarySearchLower(arr,0,n-1,item);
    int count=0;
    if(lower==-1){
        cout<<"Not found";
    }
    else{
        for(int i=lower;i<n&&arr[i]==item;i++){
            count++;
        }
        cout<<count;
    }
}
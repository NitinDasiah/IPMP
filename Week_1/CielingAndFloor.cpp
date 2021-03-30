#include<iostream>
#include<vector>
using namespace std;

int binarySearchFloor(vector<int>& arr, int low, int high, int item){
    int n=arr.size();
    if(item>=arr[n-1]){
        return n-1;
    }
    if(item<arr[0]){
        return -1;
    }
    if(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]<=item&&arr[mid+1]>=item){
            return mid;
        }
        else if(arr[mid]<=item){
            return binarySearchFloor(arr,mid+1,high,item);
        }
        else if(arr[mid]>item){
            return binarySearchFloor(arr,low,mid-1,item);
        }
    }
    else{
        return -1;
    }
}

int binarySearchCeil(vector<int>& arr, int low, int high, int item){
    int n=arr.size();
    if(item>=arr[n-1]){
        return -1;
    }
    if(item<arr[0]){
        return 0;
    }
    if(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]<=item&&arr[mid+1]>=item){
            return mid+1;
        }
        else if(arr[mid]<=item){
            return binarySearchCeil(arr,mid+1,high,item);
        }
        else if(arr[mid]>item){
            return binarySearchCeil(arr,low,mid-1,item);
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
    int i=binarySearchFloor(arr,0,n-1,item);
    int j=binarySearchCeil(arr,0,n-1,item);
    if(i!=-1){
        cout<<"Floor: "<<arr[i]<<endl;
    }
    if(j!=-1){
        cout<<"Ciel: "<<arr[j];
    }
}
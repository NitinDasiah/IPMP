#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int Max(vector<int>arr, int l, int r){
    if(l>r){
        return INT_MIN;
    }
    if(l==r){
        return arr[l];
    }
    int mid=(l+r)/2;
    int lm=Max(arr,l,mid);
    int rm=Max(arr,mid+1,r);
    return (lm>rm)?lm:rm;
}

int Min(vector<int>arr, int l, int r){
    if(l>r){
        return INT_MAX;
    }
    if(l==r){
        return arr[l];
    }
    int mid=(l+r)/2;
    int lm=Min(arr,l,mid);
    int rm=Min(arr,mid+1,r);
    return (lm<rm)?lm:rm;
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
    int max=Max(arr,0,n-1);
    int min=Min(arr,0,n-1);
    cout<<max<<" "<<min;
}
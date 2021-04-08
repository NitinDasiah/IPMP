#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m;
    cin>>m;
    vector<int> arr;
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int item;
            cin>>item;
            arr.push_back(item);
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
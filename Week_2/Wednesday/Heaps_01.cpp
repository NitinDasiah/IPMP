#include <stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void Ksort(vector<int>& arr,int n, int k){
    priority_queue<int, vector<int>, greater<int>> heap;
    vector<int> answer;
    for(int i=0;i<k;i++){
        heap.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        answer.push_back(heap.top());
        heap.pop();
        heap.push(arr[i]);
    }
    while(!heap.empty()){
        answer.push_back(heap.top());
        heap.pop();
    }
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int T;
	cin>>T;
	int n,k,item;
	for(int i=0;i<T;i++){
        cin>>n;
        cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>item;
            arr.push_back(item);
        }
        Ksort(arr,n,k);
	}
	return 0;
}s

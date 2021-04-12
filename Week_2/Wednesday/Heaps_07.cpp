#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    int item;
    cin>>item;
    maxHeap.push(item);
    int median=item;
    for(int i=1;i<n;i++){
        cin>>item;
        if(item<=median){
            maxHeap.push(item);
        }
        else{
            minHeap.push(item);
        }
        int maxSize=maxHeap.size();
        int minSize=minHeap.size();
        if(maxSize==minSize+2){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        if(minSize==maxSize+2){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        if(maxSize==minSize){
            median=(maxHeap.top()+minHeap.top())/2;
        }
        else if(maxSize>minSize){
            median=maxHeap.top();
        }
        else{
            median=minHeap.top();
        }
        cout<<median<<endl;
    }
}

#include <stdio.h>
#include<iostream>
#include<vector>
#include <queue>
using namespace std;

class frequency{
    public:
    int number;
    priority_queue<int,vector<int>,greater<int>> indices;
};


int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int item;
	    vector<frequency> arr;
	    for(int i=0;i<n;i++){
	        cin>>item;
	        bool found=false;
	        for(int j=0;j<arr.size();j++){
	            if(arr[j].number==item){
	                arr[j].indices.push(i);
	                found=true;
	                break;
	            }
	        }
	        if(found==false){
	            frequency obj;
	            obj.number=item;
	            obj.indices.push(i);
	            arr.push_back(obj);
	        }
	    }
	    for(int i=0;i<arr.size()-1;i++){
	        for(int j=0;j<arr.size()-i-1;j++){
	            if(arr[j].indices.size()<arr[j+1].indices.size()){
	                frequency obj=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=obj;
	            }
	            else if((arr[j].indices.size()==arr[j+1].indices.size())&&arr[j].number>arr[j+1].number){
	                frequency obj=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=obj;
	            }
	        }
	    }

	    for(int i=0;i<arr.size();i++){
	        while(arr[i].indices.size()>0){
	            cout<<arr[i].number<<" ";
	            arr[i].indices.pop();
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;


void rotate(int arr[], int n, int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];    
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        rotate(arr,n,k);
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
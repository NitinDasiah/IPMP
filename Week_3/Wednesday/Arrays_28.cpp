class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    vector<int> even;
	    vector<int> odd;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            even.push_back(arr[i]);
	        }
	        else{
	            odd.push_back(arr[i]);
	        }
	    }
	    int n1=even.size();
	    int n2=odd.size();
	    for(int i=0;i<n1;i++){
	        arr[i]=even[i];
	    }
	    for(int i=0;i<n2;i++){
	        arr[n1+i]=odd[i];
	    }
	}
};
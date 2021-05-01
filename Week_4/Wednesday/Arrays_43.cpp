class Solution{
public:	
	int bitonic(vector<int> arr, int n) {
	    int ascending[n], descending[n];
	    ascending[0]=1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>=arr[i-1]){
	            ascending[i]=ascending[i-1]+1; 
	        }
	        else{
	            ascending[i]=1;
	        }
	    }
	    descending[n-1]=1;
	    for(int i=n-2;i>=0;i--){
	        if(arr[i]>=arr[i+1]){
	            descending[i]=descending[i+1]+1; 
	        }
	        else{
	            descending[i]=1;
	        }
	    }
	    int max=INT_MIN;
	    for(int i=0;i<n;i++){
	        int temp=ascending[i]+descending[i]-1;
	        if(temp>max)
	            max=temp;
	    }
	    return max;
	}
};
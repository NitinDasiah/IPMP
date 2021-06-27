class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> list(n,0);
	    int Max=arr[0];
	    list[0]=arr[0];
	    for(int i=1;i<n;i++){
	        list[i]=arr[i];
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j]&&list[j]+arr[i]>list[i])
	                list[i]=list[j]+arr[i];
	        }
	        if(list[i]>Max)
	            Max=list[i];
	    }
	    return Max;
	}  
};
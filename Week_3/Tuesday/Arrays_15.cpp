class Solution{
    int binarySearch(vector<int>arr, int start, int end){
        if(start<=end){
            int mid=(start+end)/2;
            if((mid==0||arr[mid-1]==0)&&arr[mid]==1){
                return mid;
            }
            else if(arr[mid]==0){
                return binarySearch(arr, mid+1,end);
            }
            else{
                return binarySearch(arr, start,mid-1);
            }
        }
        else{
            return -1;
        }
    }
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=INT_MIN;
	    int index=-1;
        for(int i=0;i<n;i++){
            int start=binarySearch(arr[i],0,n-1);
            if(start!=-1&&((m-start)>max)){
                max=m-start;
                index=i;
            }
        }
        return index;
	}

};
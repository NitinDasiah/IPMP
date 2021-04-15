class Solution{
    void swap(int *x,int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    
public:

	void rearrange(int arr[], int n) {
	    int i=0,j=-1;
	    for(i=0;i<n;i++){
	        if(arr[i]<0){
	            j++;
	            swap(&arr[j],&arr[i]);
	        }
	    }
	    int pos=j+1,neg=0;
	    while(pos<n&&neg<pos&&arr[neg]<0){
	        swap(&arr[neg],&arr[pos]);
	        neg=neg+2;
	        pos++;
	    }
	}
};
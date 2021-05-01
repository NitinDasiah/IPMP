class Solution{
public:	
	int maxRepeating(int *arr, int n, int k) {
	  for (int i = 0; i< n; i++){
        arr[arr[i]%k] += k;
	 }

    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
 
        return result;
	}
};
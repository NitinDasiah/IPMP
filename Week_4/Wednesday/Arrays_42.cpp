class Solution{
    long long maxof(long long a, int b){
        return (a>(long long)b)?a:(long long )b;
    }
    long long min(long long a, int b){
        return (a<(long long)b)?a:(long long)b;
    }
public:

	long long maxProduct(int *arr, int n) {
	    long long maxCurr=1;
	    long long minCurr=1;
	    long long max=0;
	    int flag=0;
	    for (int i = 0; i < n; i++){
            if (*(arr+i) > 0){
                maxCurr = maxCurr * (*(arr+i));
                minCurr = min(minCurr*(*(arr+i)), 1);
                flag = 1;
            }
            else if (*(arr+i) == 0) {
                maxCurr = 1;
                minCurr = 1;
            }
            else {
                int temp = maxCurr;
                maxCurr = maxof(minCurr* (*(arr+i)), 1);
                minCurr = temp * (*(arr+i));
            }
            if (max < maxCurr)
                max = maxCurr;
        }
        if (flag == 0 && max == 0)
            return 0;
        return max;
	}
};
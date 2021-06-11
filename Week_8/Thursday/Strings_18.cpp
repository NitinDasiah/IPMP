class Solution{
    vector<int> LPS(string pattern){
        int n=s.size();
        vector<int> arr(n);
        int i=1,len=0;
        arr[0]=0;
        while (i < M) {
        if (pattern[i] == pattern[len]) {
            len++;
            arr[i] = len;
            i++;
        }
        else {

            if (len != 0) {
                len = arr[len - 1];
            }
            else {
                arr[i] = 0;
                i++;
            }
        }
        }
    }
public:		

		
	int matching(string s, string pattern){
	    vector<int> lps=LPS(pattern);
	    int i = 0; 
        int j = 0; 
        int n=s.size();
        int m=pattern.size();
    while (i < n) {
        if (pattern[j] == s[i]) {
            j++;
            i++;
        }
  
        if (j == m) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }

        else if (i < n && pattern[j] != s[i]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
	}
};
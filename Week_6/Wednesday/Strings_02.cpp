class Solution
{
    vector<string> answer;
    void permute(string a, int l, int r){

        if (l == r)
            answer.push_back(a);
        else
        {

            for (int i = l; i <= r; i++)
            {
 

                swap(a[l], a[i]);
                permute(a, l+1, r);
                swap(a[l], a[i]);
                
            }
        }
    }
    
    static bool compare(const string& x, const string& y)
    {
        for (int i = 0; i < min(x.size(), y.size()); i++) {
            if (x[i] == y[i])
                continue;
            return x[i] < y[i];
        }
        return x.size() < y.size();
    }
    
	public:
	
	   
		vector<string>find_permutation(string S)
		{
		    permute(S,0,S.size()-1);
		    sort(S.begin(),S.end(),compare);
		    return answer;
		}
};
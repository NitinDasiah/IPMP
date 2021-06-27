class Solution{
public:
    int palindromicPartition(string str)
    {
        int n=str.size();
        int cut[n];
        bool palindrome[n][n];
        memset(palindrome, false, sizeof(palindrome));
        for (int i = 0; i < n; i++)
        {
            int minCut = i;
            for (int j = 0; j <= i; j++)
            {
            if (str[i] == str[j] && (i - j < 2 || palindrome[j + 1][i - 1]))
            {
                palindrome[j][i] = true;
                minCut = min(minCut, j == 0 ? 0 : (cut[j - 1] + 1));
            }
        }
        cut[i] = minCut;
    }
    return cut[n - 1];
    }
};
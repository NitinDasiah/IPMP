long long maximumAmount(int arr[], int n) 
{
     long long table[n][n];

    for (long long gap = 0; gap < n; ++gap) {
        for (long long i = 0, j = gap; j < n; ++i, ++j) {
            long long x = ((i + 2) <= j)? table[i + 2][j]: 0;
            long long y = ((i + 1) <= (j - 1))? table[i + 1][j - 1]: 0;
            long long z = (i <= (j - 2))? table[i][j - 2]: 0;
 
            table[i][j] = max(arr[i] + min(x, y),arr[j] + min(y, z));
        }
    }
 
    return table[0][n - 1];
}

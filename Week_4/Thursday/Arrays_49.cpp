long long merge(long long arr[], long long temp[], long long left, long long mid, long long right){
    long long i, j, k;
    long long inversions = 0;
 
    i = left;
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inversions = inversions + (mid - i);
        }
    }
 
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inversions;
}



long long mergeSort(long long arr[], long long temp[], int left, int right){
    long long mid,inversions=0;
    if(left<right){
        mid=(right+left)/2;
        inversions=inversions+mergeSort(arr, temp, left, mid);
        inversions=inversions+mergeSort(arr, temp, mid+1, right);
        inversions=inversions+merge(arr,temp, left, mid+1, right);
    }
    return inversions;
}

long long int inversionCount(long long arr[], long long N)
{
    long long temp[N];
    long long inversions=mergeSort(arr,temp,0,N-1);
    return inversions;
}

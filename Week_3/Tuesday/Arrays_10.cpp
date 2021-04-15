#include <stdbool.h>

void merge(int A[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
     while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
     while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}



void mergeSort(int A[],int l, int r){
    if(l>=r){
        return;
    }
    int m=(l+r)/2;
    mergeSort(A, l, m);
    mergeSort(A,m+1,r);
    merge(A,l,m,r);
}


bool find3Numbers(int A[], int n, int X)
{
    bool answer=false;
    mergeSort(A,0,n-1);
    for(int i=n-1;i>=2;i--){
        int remain=X-A[i];
        int j=0,k=i-1;
        while(j<=k){
            int test=A[j]+A[k];
            if(test==remain){
                answer=true;
                break;
            }
            else if(test<remain){
                j++;
            }
            else if(test>remain){
                k--;
            }
        }
    }
    return answer;
}
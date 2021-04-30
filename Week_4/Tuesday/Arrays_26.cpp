#include<iostream>
#include<time.h>
using namespace std;

void swap(int* a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    srand(time(NULL));
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    for (int i = n - 1; i > 0; i--){
        int j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
#include<string.h>
#define range 255
using namespace std;

void sort(char arr[]){
    char answer[strlen(arr)];
    int count[range+1],i;
    memset(count,0,sizeof(count));
    for (i = 0; arr[i]; ++i){
        ++count[arr[i]];
    }
    for (i = 1; i <= range; ++i)
        count[i] += count[i - 1];
    for (i = 0; arr[i]; ++i) {
        answer[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
    for (i = 0; arr[i]; ++i)
        arr[i] = answer[i];
}


int main(){
    char arr[]="Adbcehgijlk";
    sort(arr);
    cout<<arr;
    return 0;
}

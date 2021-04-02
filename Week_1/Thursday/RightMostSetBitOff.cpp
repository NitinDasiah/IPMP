#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int numberOfBits=sizeof(int)*8;
    for(int i=0;i<numberOfBits;i++){
        int temp=1<<i;
        if(temp&n){
            n=n^(1<<i);
            break;
        }
    }
    cout<<n;
}
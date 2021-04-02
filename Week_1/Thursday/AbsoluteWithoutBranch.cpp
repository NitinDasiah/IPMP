#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int numberOfBits=sizeof(int)*8;
    int mask=n>>(numberOfBits-1);
    int absolute_n=(mask+n)^mask;
    cout<<absolute_n;
}
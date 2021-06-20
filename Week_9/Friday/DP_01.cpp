#include<iostream>
#include<vector>
using namespace std;

vector<int> fibonacci;

int fibonacciOfNumber(int n){
    if(fibonacci[n]==-1){
        if(n==0){
            fibonacci[n]=0;
        }
        else if(n==1){
            fibonacci[n]=1;
        }
        else{
            fibonacci[n]=fibonacciOfNumber(n-1)+fibonacciOfNumber(n-2);
        }
    }
    return fibonacci[n];
}

int main(){
    int n=10;
    fibonacci.resize(n+1,-1);
    cout<<fibonacciOfNumber(n);
}
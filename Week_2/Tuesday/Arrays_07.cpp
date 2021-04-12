#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> digits;
    while(n!=0){
        digits.push_back(n%10);
        n=n/10;
    }
    n=digits.size();
    if(n<2){
        return -1;
    }
    int position;
    bool foundPosition=false;
    for(int i=0;i<n-1;i++){
        if(digits[i]>digits[i+1]){
            position=i+1;
            foundPosition=true;
            break;
        }
    }
    cout<<"Found Position: "<<position<<endl;
    if(!foundPosition){
        position=n-1;
    }
    bool foundLower=false;
    int lower=INT_MAX;
    int lowerPosition=-1;
    for(int i=0;i<position;i++){
        if(digits[i]>digits[position]&&digits[i]<lower){
            lower=digits[i];
            lowerPosition=i;
            foundLower=true;
        }
    }
    cout<<"Found Lower: "<<lowerPosition<<endl;
    int temp=digits[position];
    digits[position]=digits[lowerPosition];
    digits[lowerPosition]=temp;
    for(int i=0;i<position-1;i++){
        for(int j=0;j<position-i-1;j++){
            if(digits[j]<digits[j+1]){
                int temp=digits[j];
                digits[j]=digits[j+1];
                digits[j+1]=temp;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<digits[i];
    }
    cout<<endl;
}

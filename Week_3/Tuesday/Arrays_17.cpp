#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int item;
    if(n<2){
        return -1;
    }
    map<int,int> count;
    for(int i=0;i<n;i++){
        cin>>item;
        count[item]++;
    }
    auto it=count.begin();
    int pre=it->first;
    if((it->second)>1){
        return 0;
    }
    it++;
    int min=INT_MAX;
    while(it!=count.end()){
        if(it->second>1){
            return 0;
        }
        else{
            if((it->first)-pre<min){
                min=(it->first)-pre;
            }
        }
        pre=it->first;
        it++;
    }
    cout<<min;
}
#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<10){
        list<string> arr;
        string item;
        for(int i=0;i<n;i++){
            cin>>item;
            arr.push_back(item);
        }
        list<string>::iterator it;
        for(it=arr.begin();it!=arr.end();it++){
            cout<<*it;
        }
    }
    else{
        list<string> arr;
        string item;
        for(int i=0;i<10;i++){
            cin>>item;
            arr.push_back(item);
        }
        for(int i=10;i<n;i++){
            cin>>item;
            arr.pop_front();
            arr.push_back(item);
        }
        list<string>::iterator it;
        for(it=arr.begin();it!=arr.end();it++){
            cout<<*it;
        }
    }
}

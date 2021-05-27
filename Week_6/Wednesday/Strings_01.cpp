#include<iostream>
#include<string>
using namespace std;

void recursivePrint(string temp, int index){
    if(index==temp.size())
        return;
    recursivePrint(temp,index+1);
    cout<<temp[index];
}

int main(){
    string Temp="ABCDEF";
    recursivePrint(Temp,0);
}
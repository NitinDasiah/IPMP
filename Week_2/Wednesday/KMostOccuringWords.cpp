#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

class Hash{
    public:
        string s;
        int frequency;
};


void add(vector<Hash>& List,string item){
    bool present=false;
    for(int i=0;i<List.size();i++){
        if(List[i].s==item){
            present=true;
            List[i].frequency++;
            break;
        }
    }
    if(present==false){
        Hash newHash;
        newHash.s=item;
        newHash.frequency=1;
        List.push_back(newHash);
    }
}





int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<Hash> List;
    string item;
    for(int i=0;i<n;i++){
        cin>>item;
        add(List,item);
    }
    int size=List.size();
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(List[j].frequency<List[j+1].frequency){
                Hash temp=List[j];
                List[j]=List[j+1];
                List[j+1]=temp;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<List[i].s<<" ";
    }
}
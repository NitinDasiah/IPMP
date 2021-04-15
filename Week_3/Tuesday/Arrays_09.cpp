#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,item;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>item;
        arr.push_back(item);
    }
    vector<vector<int>> answer;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=2;i--){
        int square=arr[i]*arr[i];
        int j=0,k=i-1;
        while(j<=k){
            int number=arr[j]*arr[j]+arr[k]*arr[k];
            if(number==square){
                vector<int> temp;
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                temp.push_back(arr[i]);
                answer.push_back(temp);
                break;
            }
            else if(number<square){
                j++;
            }
            else if(number>square){
                k--;
            }
            else{
                cout<<"Error";
            }
        }
    }
    if(answer.size()==0){
        cout<<"No triplets";
    }
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<3;j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
}
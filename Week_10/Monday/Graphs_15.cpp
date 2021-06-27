#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool wPrefersM1OverM(vector<vector<int>>prefer, int w, int m, int m1){
    int n=prefer[0].size();
    for(int i=0;i<n;i++){
        if (prefer[w][i] == m1)
            return true;
 
        if (prefer[w][i] == m)
           return false;
    }
}

void stableMarriage(vector<vector<int>> prefer){
    int n=prefer[0].size();
    vector<int> wPartner(n,-1);
    vector<bool> mFree(n,false);
    int freeCount=n;
    while(freeCount){
        int m;
        for(m=0;m<n;m++){
            if(!mFree[m])
                break;
        }
        for(int i=0;i<n;i++){
            int w=prefer[m][i];
            if(wPartner[w-n]==false){
                wPartner[w-n] = m;
                mFree[m] = true;
                freeCount--;
            }
            else{
                int m1=wPartner[w-n];
                if (wPrefersM1OverM(prefer, w, m, m1) == false)
                {
                    wPartner[w-n] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }
            }
        }
    }
    cout << "Woman   Man" << endl;
    for (int i = 0; i < n; i++)
       cout << " " << i+n << "\t" << wPartner[i] << endl;
}

int main()
{
    vector<vector<int>> prefer = {  {7, 5, 6, 4},
                                    {5, 4, 6, 7},
                                    {4, 5, 6, 7},
                                    {4, 5, 6, 7},
                                    {0, 1, 2, 3},
                                    {0, 1, 2, 3},
                                    {0, 1, 2, 3},
                                    {0, 1, 2, 3},   };
    stableMarriage(prefer);
 
    return 0;
}
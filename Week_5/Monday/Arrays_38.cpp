vector<int> intersectionOfNSets(vector<vector<int>>& sets){
    int n=sets.size();
    map<int,int> Hash[n];
    sort(sets.begin(),sets.end());
    int min=INT_MAX, max=INT_MIN;
    for(int i=0;i<n;i++){
        sort(sets[i].begin(),sets[i].end());
        if(sets[i].front()<min)
            min=sets[i].front;
        if(sets[i].back()>max)
            max=sets[i].back();
        for(int j=0;j<sets[i].size();j++)
            Hash[i][sets[i][j]]++;
    }
    vector<int> answer;
    for(int i=min;i<=max;i++){
        int min=INT_MAX;
        for(int j=0;j<n;i++){
            if(Hash[j][i]<min)
                min=Hash[j][i];
        }
        while(min--){
            answer.push_back(i);
        }
    }
    return answer;
}
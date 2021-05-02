class element{
    public:
        int index;
        int value;
        element(int a, int b){
            this->index=a;
            this->value=b;
        }
};

struct compare{
    bool operator()(const element&P1, const element &P2){
        return P1.value>P2.value;
    }
};

bool compareElement(element P1, element P2){
    return P1.index<P2.index;
}

class Solution
{
    public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<element,vector<element>, compare> minHeap;
        for(int i=0;i<k;i++){
            minHeap.emplace(i,arr[i]);
        }
        for(int i=k;i<n;i++){
            if(minHeap.top().value<arr[i]){
                minHeap.pop();
                minHeap.emplace(i,arr[i]);
            }
        }
        vector<element> answer;
        while(!minHeap.empty()){
            answer.push_back(minHeap.top());
            minHeap.pop();
        }
        sort(answer.begin(),answer.end(),compareElement);
        vector<int> retAnswer;
        for(int i=0;i<answer.size();i++){
            retAnswer.push_back(answer[i].value);
        }
        return retAnswer;
    }
};
class Solution
{
    
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> answer(n);
    stack<int> s;
    unordered_map<int, int> mp;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }

        while (s.empty() == false
               && s.top() < arr[i])
        {
            mp[s.top()] = arr[i];
            s.pop();
        }

        s.push(arr[i]);
    }

    while (s.empty() == false)
    {
        mp[s.top()] = -1;
        s.pop();
    }
 
    for (int i = 0; i < n; i++)
        answer[i]=mp[arr[i]];
    return answer;
    }
};
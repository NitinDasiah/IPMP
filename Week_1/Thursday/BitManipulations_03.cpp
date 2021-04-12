class Solution {
public:
    vector<int> countBits(int num) {
        /*count set bits from 0 to given range (leetcode question)*/
        vector<int> arr;
        for(int i=0;i<=num;i++){
            int temp=i;
            int count=0;
            while(temp){
                if(temp&1){
                    count++;
                }
                temp=temp>>1;
            }
            arr.push_back(count);
        }
        return arr;
    }
};

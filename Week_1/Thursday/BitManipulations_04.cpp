class Solution{
    public:
    int countBitsFlip(int a, int b){
        int temp=a^b;
        int count=0;
        while(temp){
            if(temp&1){
                count++;
            }
            temp=temp>>1;
        }
        return count;
    }
};

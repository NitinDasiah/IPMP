class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int t;
        int reverse=0;
        for(int i=0;i<32;i++){
            t=(n&(1<<i));
            if(t){
                reverse=reverse|(1<<32-1-i);
            }
        }
        return reverse;
    }      
};

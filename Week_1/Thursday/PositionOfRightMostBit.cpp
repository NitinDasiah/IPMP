class Solution{
    public:
    /*  function to find position of first set 
    bit in the given number
     * n: given input for which we want to get
          the position of first set bit
     */
    unsigned int getFirstSetBit(int n){
        int numberOfBits=sizeof(n)*8;
        for(int i=0;i<=numberOfBits;i++){
            int temp=1<<i;
            if(temp&n){
                return i+1;
            }
        }
        return 0;
    }
};
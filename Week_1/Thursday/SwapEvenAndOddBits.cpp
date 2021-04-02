class Solution{
    public:
    // function to swap odd and even bits
    unsigned int swapBits(unsigned int n)
    {
    	unsigned int temp=1;
    	int numberOfBits=sizeof(unsigned int)*8;
    	for(int i=0;i<numberOfBits;i=i+2){
    	    temp=(temp<<2)|1;
    	}
    	unsigned int odd=n&temp;
    	temp=temp<<1;
    	unsigned int even=n&temp;
    	unsigned int swapped=(odd<<1)|(even>>1);
    	return swapped;
    }
};

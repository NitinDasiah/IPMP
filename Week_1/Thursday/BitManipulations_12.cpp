class Solution{
public:
    int swapNibbles(unsigned char x){
        int temp=0;
        for(int i=0;i<4;i++){
            temp=temp+pow(2,i);
        }
        unsigned char right=x&temp;
        temp=temp<<4;
        unsigned char left=x&temp;
        right=right<<4;
        left=left>>4;
        return right|left;
    }
};

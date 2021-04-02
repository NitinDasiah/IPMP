class Solution {
  public:
    int findPosition(int N) {
        if(N>0){
            if(floor(log2(N))==ceil(log2(N))){
                return log2(N)+1; 
            }
            else{
                return -1;
            }
        }
        return -1;
    }
};
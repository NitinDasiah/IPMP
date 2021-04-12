class Solution {
    
    int absolute(int x){
        int numberOfBits=sizeof(int)*8;
        int mask=x>>(numberOfBits-1);
        return (x+mask)^mask;
    }
    
    int add(int a, int b){
        while(b!=0){
            int carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
    
    int subtract(int a, int b){
         while(b!=0){
             int borrow=(~a)&b;
             a=a^b;
             b=borrow<<1;
         }  
        return a;
    }
    
public:
    int getSum(int a, int b) {
        if(a>=0&&b>=0){
            return add(a,b);
        }
        else if(a<0&&b>=0){
            int absolute_a=absolute(a);
            return subtract(b,absolute_a);
        }
        else if(a>=0&&b<0){
            int absolute_b=absolute(b);
            return subtract(a,absolute_b);
        }
        else{
            int absolute_a=absolute(a);
            int absolute_b=absolute(b);
            int sum=add(absolute_a,absolute_b);
            return (~sum)+1;
        }
        return 0;
    }
};

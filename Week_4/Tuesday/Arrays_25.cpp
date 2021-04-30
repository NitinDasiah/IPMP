class Solution{
  public:
    
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> product;
        if(n<2){
            product.push_back(1);
            return product;
        }
       for(int i=0;i<n;i++){
           product.push_back(1);
       }
       long long temp=1;
       for(int i=0;i<n;i++){
           product[i]=product[i]*temp;
           temp=temp*nums[i];
       }
       temp=1;
       for(int i=n-1;i>=0;i--){
           product[i]=product[i]*temp;
           temp=temp*nums[i];
       }
       return product;
    }
};

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        map<int,int> Hash;
        for(int i=0;i<size;i++){
            Hash[a[i]]++;
            if(Hash[a[i]]>(size/2)){
                    return a[i];
            }
        }
        return -1;
    }
};
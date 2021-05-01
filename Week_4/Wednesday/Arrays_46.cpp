class Solution
{
    public:
    ll FindMaxSum(ll arr[], ll n)
    {
        ll incl=arr[0];
        ll excl=0;
        ll excl_new;
        for(ll i=1;i<n;i++){
            excl_new=(incl>excl)?incl:excl;
            incl=excl+arr[i];
            excl=excl_new;
        }
        return ((incl > excl) ? incl : excl);
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==0){
            n=n/2;
            double median= ((double)nums1[n]+(double)nums1[n-1])/2;
            return median;
        }
        else{
            return nums1[n/2];
        }
    }
};
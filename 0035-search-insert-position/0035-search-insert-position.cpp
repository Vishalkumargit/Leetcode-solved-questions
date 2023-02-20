class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n=nums.size(),l=0,r=n-1;
    int m=0;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(target==nums[m])
            return m;
        else if(target<nums[m])
            r=m;
        else if(target>nums[m])
            l=m+1;
        }
        return nums[l]<target?l+1:l;
    }
};
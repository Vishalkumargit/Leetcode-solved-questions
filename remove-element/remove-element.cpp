class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,n=nums.size();
        
        while(l<n){
            if(nums[l]==val){
                nums[l]=nums[n-1];
                n--;
            }
            else
                l++;
        }
        return n;
    }
};
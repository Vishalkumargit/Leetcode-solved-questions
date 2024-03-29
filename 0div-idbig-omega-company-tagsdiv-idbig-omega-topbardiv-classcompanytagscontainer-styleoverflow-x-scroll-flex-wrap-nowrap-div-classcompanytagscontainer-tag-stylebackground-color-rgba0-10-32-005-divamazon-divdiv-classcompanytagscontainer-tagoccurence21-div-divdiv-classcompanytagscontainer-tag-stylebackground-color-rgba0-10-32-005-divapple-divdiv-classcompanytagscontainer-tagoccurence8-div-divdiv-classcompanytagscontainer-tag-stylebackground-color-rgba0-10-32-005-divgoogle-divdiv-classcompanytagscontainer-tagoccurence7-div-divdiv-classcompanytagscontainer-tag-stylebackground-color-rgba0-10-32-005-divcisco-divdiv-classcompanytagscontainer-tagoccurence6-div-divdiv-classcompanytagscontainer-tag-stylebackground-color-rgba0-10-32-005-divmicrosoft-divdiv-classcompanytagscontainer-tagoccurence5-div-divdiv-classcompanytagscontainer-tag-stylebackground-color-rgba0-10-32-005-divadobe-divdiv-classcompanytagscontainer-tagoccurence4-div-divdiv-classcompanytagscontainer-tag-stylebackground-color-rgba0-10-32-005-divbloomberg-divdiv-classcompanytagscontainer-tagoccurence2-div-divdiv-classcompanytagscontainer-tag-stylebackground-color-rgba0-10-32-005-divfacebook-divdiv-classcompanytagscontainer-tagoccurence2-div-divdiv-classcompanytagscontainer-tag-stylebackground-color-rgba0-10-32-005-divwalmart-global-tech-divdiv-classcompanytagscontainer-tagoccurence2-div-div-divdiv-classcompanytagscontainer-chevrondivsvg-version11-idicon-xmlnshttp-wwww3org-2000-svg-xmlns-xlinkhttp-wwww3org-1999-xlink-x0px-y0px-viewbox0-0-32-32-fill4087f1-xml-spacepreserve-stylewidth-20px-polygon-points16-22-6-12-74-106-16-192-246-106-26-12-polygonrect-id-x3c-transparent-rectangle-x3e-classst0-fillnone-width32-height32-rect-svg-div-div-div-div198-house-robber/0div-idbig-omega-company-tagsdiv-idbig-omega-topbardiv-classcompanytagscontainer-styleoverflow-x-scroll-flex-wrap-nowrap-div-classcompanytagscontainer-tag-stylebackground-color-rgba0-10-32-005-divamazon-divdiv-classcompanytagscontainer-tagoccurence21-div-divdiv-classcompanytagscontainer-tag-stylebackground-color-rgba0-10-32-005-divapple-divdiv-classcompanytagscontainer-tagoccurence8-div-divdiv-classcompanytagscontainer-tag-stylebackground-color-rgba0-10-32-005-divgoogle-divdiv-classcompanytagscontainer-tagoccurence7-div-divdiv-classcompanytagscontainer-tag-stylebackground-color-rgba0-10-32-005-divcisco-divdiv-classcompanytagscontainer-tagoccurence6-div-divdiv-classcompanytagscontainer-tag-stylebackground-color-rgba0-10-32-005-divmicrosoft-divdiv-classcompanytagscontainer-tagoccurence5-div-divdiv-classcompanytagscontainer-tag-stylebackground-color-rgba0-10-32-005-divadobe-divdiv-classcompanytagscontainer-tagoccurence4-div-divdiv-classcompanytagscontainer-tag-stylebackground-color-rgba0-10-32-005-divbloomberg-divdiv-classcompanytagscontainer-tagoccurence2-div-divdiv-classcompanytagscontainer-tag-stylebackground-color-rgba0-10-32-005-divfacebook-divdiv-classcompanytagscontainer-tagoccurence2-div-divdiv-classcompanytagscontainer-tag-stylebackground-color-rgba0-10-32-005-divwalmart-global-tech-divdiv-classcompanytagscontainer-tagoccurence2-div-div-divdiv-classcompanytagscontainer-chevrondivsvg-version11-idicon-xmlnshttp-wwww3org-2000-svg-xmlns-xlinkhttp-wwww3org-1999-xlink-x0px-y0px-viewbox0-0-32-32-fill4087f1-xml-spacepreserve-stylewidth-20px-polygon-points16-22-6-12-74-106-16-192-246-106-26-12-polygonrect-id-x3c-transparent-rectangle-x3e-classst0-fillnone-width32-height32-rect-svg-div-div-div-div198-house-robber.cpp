class Solution {
public:
    int f(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1)return dp[i];

        return dp[i]=max(f(i+1,nums,dp),nums[i]+f(i+2,nums,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return f(0,nums,dp);
    }
};
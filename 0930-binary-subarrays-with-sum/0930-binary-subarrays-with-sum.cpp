class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int presum = 0;
        int count=0;
        nums.insert(nums.begin(),0);
        for(int i=0;i<nums.size();i++)
        {
            presum = presum + nums[i];
            //we have currsum uptill this point
            if(mp.find(presum - goal)!=mp.end())
            {
                count = count + mp[presum - goal];
            }
            mp[presum]++;
        }
        return count;
    }
};
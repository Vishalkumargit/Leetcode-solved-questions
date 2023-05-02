class Solution {
public:
    int signFunc(double &n){
        int ans=1;
        if(n>0)
            ans=1;
        else if(n<0)
            ans=-1;
        else
            ans=0;
        
        return ans;
    }
    int arraySign(vector<int>& nums) {
        double product=1;
        for(int i=0;i<nums.size();++i){
            product*=nums[i];
        }
        int ans = signFunc(product);
        return ans;
    }
};
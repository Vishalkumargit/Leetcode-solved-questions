class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>count;
        for(auto i: nums){
            count[i]++;
        }

        int repeat = 0,missing = 0;
        for(int i = 1; i <= nums.size(); i++){
            if(count[i] == 2){
                repeat = i;
            }
            if(count[i] == 0){
                missing = i;
            } 

        }
        return {repeat,missing};
    }
};
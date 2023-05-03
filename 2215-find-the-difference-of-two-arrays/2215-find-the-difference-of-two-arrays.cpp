class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        nums1.erase(unique(begin(nums1), end(nums1)), end(nums1));
        sort(begin(nums2), end(nums2));
        nums2.erase(unique(begin(nums2), end(nums2)), end(nums2));        
        
        vector<vector<int>> answer;
        
        vector<int> temp;
        for(int i=0;i<nums1.size();++i){
            int count=0;
            for(int j=0;j<nums2.size();++j){
                if(nums1[i]==nums2[j]){
                    count++;
                }
            }
            if(count==0)temp.push_back(nums1[i]);
            
        }
        
        answer.push_back(temp);
        
        
        vector<int> temp1;
        for(int i=0;i<nums2.size();++i){
            int count=0;
            for(int j=0;j<nums1.size();++j){
                if(nums2[i]==nums1[j]){
                    count++;
                }
            }
            if(count==0)temp1.push_back(nums2[i]);
            
        }
       
        answer.push_back(temp1);
        
        return answer;
    }
};
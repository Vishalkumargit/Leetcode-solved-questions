class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.length();
        
        int left=0,count[26]={},ans=0;
        for(int right=0;right<len;right++){
            count[s[right]-'A']++;
        
        while((right-left+1)-*max_element(count,count+26)>k){
            count[s[left]-'A']--;
            left++;
        }
        ans=max(ans,right-left+1);
        }
        return ans;
    }
};
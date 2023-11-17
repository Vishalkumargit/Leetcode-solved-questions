class Solution {
public:
    int minPairSum(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        int sum = INT_MIN;
        int len = arr.size();
        for(int i=0; i<len/2; i++)
        {
            int sub = arr[i] + arr[len-1-i];
            if(sum < sub)
                sum = sub;
        }
        
        return sum;
    }
};
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
		
		int ans=0,n=nums.size();
		
		//sort the given array in descending order
		sort(nums.begin(),nums.end(),greater<int>());
		
		//Traverse the array till we reach the minimum number,since               
		//array is sorted the minimum number is last element of 
		//the array and when any element becomes equal to that                       
		//minimum we can stop traversing and return the result
		for(int j=0;j<n && nums[n-1]!=nums[j];j++)
		{
		    //to check if current element is different from next
			if(nums[j]!=nums[j+1])
				ans+=j+1;  //j+1 bcz array is 0-indexed
        }
		return ans;
    }
};
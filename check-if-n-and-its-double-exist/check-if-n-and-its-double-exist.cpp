class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n =arr.size();
        
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                if(i!=j && (arr[i]==2*arr[j] || arr[j]==2*arr[i]))
                    return true;
            }
        }
        return false;
    }
};
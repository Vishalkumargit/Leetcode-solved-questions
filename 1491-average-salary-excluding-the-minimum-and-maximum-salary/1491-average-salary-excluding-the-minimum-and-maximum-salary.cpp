class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        
        int len = salary.size();
        double sum=0;
        int count=0;
        
        for(int i=1;i<len-1;++i){
            sum=sum+salary[i];
            count++;
        }
        return sum/count;
    }
};
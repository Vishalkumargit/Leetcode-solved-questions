class Solution {
public:
    static int maxProduct(const vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int num : nums) {
            if (size(pq) < 2 || num >= pq.top()) {
                pq.push(num);
                if (size(pq) == 3) pq.pop();
            }
        }
        const int max1 = pq.top(); pq.pop();
        return (max1 - 1) * (pq.top() - 1);
    }
};
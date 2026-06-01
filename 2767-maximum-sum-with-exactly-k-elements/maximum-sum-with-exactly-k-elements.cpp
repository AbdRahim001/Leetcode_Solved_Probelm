class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> n;
        for (auto i : nums) {
            n.push(i);
        }
        int sum = 0;
        while (k--) {
            int temp = n.top();
            sum += temp;
            n.pop();
            n.push(temp + 1);
        }
        return sum;
    }
};
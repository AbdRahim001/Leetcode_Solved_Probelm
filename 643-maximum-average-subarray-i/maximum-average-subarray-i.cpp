class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double ans = sum / k;
        if (nums.size() == k)
            return ans;
        for (int i = k; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - k];
            double avg = sum / k;
            ans = max(ans, avg);
        }
        return ans;
    }
};
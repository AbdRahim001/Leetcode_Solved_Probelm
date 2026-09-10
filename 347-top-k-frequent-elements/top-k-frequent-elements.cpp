class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq(20001, 0);
        for (auto i : nums) {
            freq[i + 10000]++;
        }
        priority_queue<int> pq;
        for (auto i : freq) {
            if (i != 0)
                pq.push(i);
        }
        vector<int> ans;
        while (k--) {
            int t = pq.top();
            for (int i = 0; i < 20001; i++) {
                if (t == freq[i]) {
                    freq[i] = 0;
                    ans.push_back(i - 10000);
                    break;
                }
            }
            pq.pop();
        }
        return ans;
    }
};
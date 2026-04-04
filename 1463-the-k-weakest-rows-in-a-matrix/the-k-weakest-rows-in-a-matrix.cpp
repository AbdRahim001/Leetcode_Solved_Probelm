class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        int p = 0;
        for (auto i : mat) {
            int count = 0;
            for (auto j : i) {
                if (j == 1)
                    count++;
            }
            pq.push({count, p});
            p++;
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n, "0");
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }
        int k = 1;
        while (!pq.empty()) {
            auto [top, pos] = pq.top();
            pq.pop();
            if (k == 1)
                result[pos] = "Gold Medal";
            else if (k == 2)
                result[pos] = "Silver Medal";
            else if (k == 3)
                result[pos] = "Bronze Medal";
            else {
                result[pos] = to_string(k);
            }
            k++;
        }
        return result;
    }
};
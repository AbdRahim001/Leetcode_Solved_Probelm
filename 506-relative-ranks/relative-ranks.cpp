class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n, "0");
        priority_queue<int> pq;
        for (auto i : score) {
            pq.push(i);
        }
        int k = 1;
        while (!pq.empty()) {
            int top = pq.top();
            pq.pop();
            auto it = find(score.begin(), score.end(), top);
            int pos = it - score.begin();
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
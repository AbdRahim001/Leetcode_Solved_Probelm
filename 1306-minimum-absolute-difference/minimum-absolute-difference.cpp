class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        stack<pair<int, int>> sta;
        int minDiff = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++) {
            int a = arr[i];
            int b = arr[i + 1];
            if (b - a < minDiff) {
                while (!sta.empty())
                    sta.pop();
                sta.push({a, b});
                minDiff = b - a;
            } else if (b - a == minDiff) {
                sta.push({a, b});
            }
        }

        vector<vector<int>> result;
        while (!sta.empty()) {
            auto p = sta.top();
            result.push_back({p.first, p.second});
            sta.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
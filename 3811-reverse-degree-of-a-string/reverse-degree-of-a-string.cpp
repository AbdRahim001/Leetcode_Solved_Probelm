class Solution {
public:
    int reverseDegree(string s) {
        vector<int> points(26, 26);
        for (int i = 0; i < points.size(); i++) {
            points[i] -= i;
        }
        int ans = 0;
        int j = 1;
        for (auto i : s) {
            ans += points[i - 'a'] * j;
            j++;
        }
        return ans;
    }
};
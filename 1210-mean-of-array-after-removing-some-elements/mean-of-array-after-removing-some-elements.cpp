class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        int trim = len * 5 / 100;
        int total = 0;
        for (int i = trim; i < len - trim; i++) {
            total += arr[i];
        }
        return double(total) / (len - 2 * trim);
    }
};
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for (auto i : arr1) {
            for (auto j : arr2) {
                if (abs(i - j) <= d) {
                    count++;
                    break;
                }
            }
        }
        return arr1.size() - count;
    }
};
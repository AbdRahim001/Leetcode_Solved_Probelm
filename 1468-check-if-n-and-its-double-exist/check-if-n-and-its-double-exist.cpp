class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int zeroCount = 0;
        for (int i : arr) {
            if (i == 0)
                zeroCount++;
            auto it = find(arr.begin(), arr.end(), i * 2);
            if (it != arr.end() && (i != 0 || zeroCount > 1)) {
                return true;
            }
        }
        return false;
    }
};
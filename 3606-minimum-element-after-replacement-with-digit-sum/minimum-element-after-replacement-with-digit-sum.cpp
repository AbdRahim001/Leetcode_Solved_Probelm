class Solution {
public:
    int summ(int x) {
        int temp = 0;
        while (x != 0) {
            temp += x % 10;
            x /= 10;
        }
        // cout << temp << ' ';
        return temp;
    }
    int minElement(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int k = summ(nums[i]);
            result.push_back(k);
        }
        return *min_element(result.begin(), result.end());
    }
};
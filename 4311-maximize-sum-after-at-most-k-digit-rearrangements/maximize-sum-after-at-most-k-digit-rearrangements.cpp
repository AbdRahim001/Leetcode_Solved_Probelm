class Solution {
public:
    int makeLargest(int x) {
        vector<int> digits;
        while (x > 0) {
            digits.push_back(x % 10);
            x /= 10;
        }
        sort(digits.rbegin(), digits.rend());
        int n = 0;
        for (auto i : digits) {
            n = n * 10 + i;
        }
        return n;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        long long int sum = 0;
        vector<pair<int, pair<int, int>>> v;
        for (auto i : nums) {
            int num = makeLargest(i);
            int diff = abs(num - i);
            v.push_back({diff, {num, i}});
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < k; i++) {
            sum += v[i].second.first;
        }
        for (int i = k; i < nums.size(); i++) {
            sum += v[i].second.second;
        }
        return sum;
    }
};
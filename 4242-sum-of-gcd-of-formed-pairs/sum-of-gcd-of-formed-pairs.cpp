class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        multiset<int> prefixGcd;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGcd.insert(gcd(nums[i], mx));
        }

        long long int sum = 0;
        int a = (int)prefixGcd.size() / 2;
        for (int i = 0; i < a; i++) {
            int x = *prev(prefixGcd.end());
            int y = *prefixGcd.begin();
            sum += gcd(x, y);
            prefixGcd.erase(prefixGcd.find(x));
            prefixGcd.erase(prefixGcd.find(y));
        }
        return sum;
    }
};
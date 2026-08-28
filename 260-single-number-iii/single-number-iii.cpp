class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for (auto i : nums) {
            x ^= i;
        }
        unsigned int diff =
            static_cast<unsigned int>(x) & (-static_cast<unsigned int>(x));
        int a = 0, b = 0;
        for (int num : nums) {
            if (num & diff)
                a ^= num;
            else
                b ^= num;
        }
        return {a, b};
    }
};
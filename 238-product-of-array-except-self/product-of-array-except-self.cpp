class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product1 = 1;
        int product2 = 1;
        int zeroCount=0;
        for (auto i : nums) {
            if (i != 0)
                product1 *= i;
            product2 *= i;
            if (i == 0) 
                zeroCount++;
            }
            if (zeroCount > 1) {
                return vector<int>(nums.size(), 0);
            }
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    nums[i] = product1;
                else
                    nums[i] = product2 / nums[i];
            }
            return nums;
        }
    };
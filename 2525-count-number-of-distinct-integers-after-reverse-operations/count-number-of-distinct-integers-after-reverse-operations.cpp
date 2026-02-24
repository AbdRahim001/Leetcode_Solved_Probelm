class Solution {
public:
    int rev_num(int x) {
        int temp = 0;
        while (x != 0) {
            int rem = x % 10;
            temp = 10 * temp + rem;
            x /= 10;
        }
        return temp;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = rev_num(nums[i]);
            nums.push_back(a);
        }
        set<int> st;
        for (auto& i : nums) {
            st.insert(i);
        }
        return st.size();
    }
};
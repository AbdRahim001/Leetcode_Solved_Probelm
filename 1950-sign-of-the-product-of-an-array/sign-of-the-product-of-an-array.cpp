class Solution {
public:
    int arraySign(vector<int>& nums) {
        int posCount = 0;
        int negCount = 0;
        for (auto i : nums) {
            if (i == 0)
                return 0;
            else if (i < 0)
                negCount++;
            else
                posCount++;
        }
        if (negCount % 2)
            return -1;
        return 1;
    }
};
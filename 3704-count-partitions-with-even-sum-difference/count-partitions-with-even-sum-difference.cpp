class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            vector<int> part1;
            vector<int> part2;
            part1.insert(part1.end(), nums.begin(), nums.begin() + i);
            part2.insert(part2.end(), nums.begin() + i, nums.end());
            int sum1 = accumulate(part1.begin(), part1.end(), 0);
            int sum2 = accumulate(part2.begin(), part2.end(), 0);
            if (abs(sum1 - sum2) % 2 == 0)
                count++;
        }
        return count;
    }
};
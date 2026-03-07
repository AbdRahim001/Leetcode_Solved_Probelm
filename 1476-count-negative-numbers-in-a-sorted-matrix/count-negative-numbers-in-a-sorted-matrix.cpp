class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            int low = 0;
            int high = grid[i].size() - 1;
            int pos = grid[i].size();
            while (low <= high) {
                int loc = (low + high) / 2;
                if (grid[i][loc] < 0) {
                    pos = loc;
                    high = loc - 1;
                }

                else {
                    low = loc + 1;
                    pos = low;
                }
            }
            count += grid[i].size() - pos;
        }
        return count;
    }
};
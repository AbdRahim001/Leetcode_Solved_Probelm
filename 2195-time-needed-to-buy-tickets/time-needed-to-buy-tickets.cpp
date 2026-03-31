class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        int j = 0;
        for (auto i : tickets) {
            q.push({i, j});
            j++;
        }
        int selected = tickets[k];
        int count = 0;
        while (selected != 0) {
            int temp_val = q.front().first;
            int temp_pos = q.front().second;
            q.pop();
            count++;
            if (temp_pos == k) {
                selected--;
                if (temp_val - 1 > 0)
                    q.push({temp_val - 1, temp_pos});
            } else {
                if (temp_val - 1 > 0)
                    q.push({temp_val - 1, temp_pos});
            }
        }
        return count;
    }
};
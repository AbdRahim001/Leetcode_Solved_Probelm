class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        multimap<int, vector<int>, greater<int>> mp;
        for (int i = 0; i < tasks.size(); i++) {
            mp.insert({tasks[i][1] - tasks[i][0], {tasks[i][0], tasks[i][1]}});
        }

        int answer = 0;
        int current = 0;

        for (auto& i : mp) {
            int diff = i.first;
            int start = i.second[0];
            int end = i.second[1];
            if (current < end) {
                answer += end - current;
                current = end;
            }
            current -= start;
        }
        return answer;
    }
};
class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int present = 0;
        int len = requests.size();
        int ans = 0;
        for (int i = 0; i < len; i++) {
            ans += abs(requests[i] - present);
            present = requests[i];
        }
        return ans;
    }
};
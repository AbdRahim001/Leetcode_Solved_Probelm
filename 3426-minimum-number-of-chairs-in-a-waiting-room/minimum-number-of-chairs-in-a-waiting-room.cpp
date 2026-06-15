class Solution {
public:
    int minimumChairs(string s) {
        int mx = 0;
        int count = 0;
        for (auto i : s) {
            if (i == 'E')
                count++;
            else
                count--;
            mx = max(mx, count);
        }
        return mx;
    }
};
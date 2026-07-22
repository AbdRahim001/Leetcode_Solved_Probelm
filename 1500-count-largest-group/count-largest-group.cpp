class Solution {
public:
    int check(int x) {
        int temp = 0;
        while (x != 0) {
            temp += x % 10;
            x /= 10;
        }
        return temp;
    }
    int countLargestGroup(int n) {
        vector<int> freq(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            freq[check(i)]++;
        }
        int mx = freq[0];
        int count = 0;
        for (int i = 1; i < freq.size(); i++) {
            if (mx < freq[i]) {
                mx = freq[i];
                count = 0;
            }
            if (mx == freq[i]) {
                count++;
            }
        }
        return count;
    }
};
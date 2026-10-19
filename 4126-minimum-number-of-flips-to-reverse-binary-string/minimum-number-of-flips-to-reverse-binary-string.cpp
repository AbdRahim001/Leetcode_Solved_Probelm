class Solution {
public:
    string binary(int x) {
        if (x == 0)
            return "0";
        string s = "";
        while (x > 0) {
            s += (x & 1) ? "1" : "0";
            x >>= 1;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    int minimumFlips(int n) {
        string s = binary(n);
        n = s.size();
        int left = 0;
        int right = n - 1;
        int count = 0;
        while (left < right) {
            if (s[left] != s[right])
                count++;
            left++;
            right--;
        }
        return 2 * count;
    }
};
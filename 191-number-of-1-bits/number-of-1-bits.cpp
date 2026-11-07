class Solution {
public:
    int hammingWeight(int n) {
        string s = "";
        while (n) {
            if (n % 2 == 1)
                s.push_back('1');
            else
                s.push_back('0');
            n /= 2;
        }
        return count(s.begin(), s.end(), '1');
    }
};
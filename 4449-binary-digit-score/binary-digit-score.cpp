class Solution {
public:
    int calculateScore(int a, int b) {
        string A = bitset<8>(a).to_string();
        string B = bitset<8>(b).to_string();
        int s1 = count(A.begin(), A.end(), '1');
        int s2 = count(B.begin(), B.end(), '1');
        if (s1 >= s2)
            return s1 * s2;
        return s2 / s1;
    }
};
//--BRUTE FORCE O(N^3)
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int len = digits.size();
        set<int> st;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                for (int k = 0; k < len; k++) {
                    if (i != j && i != k && j != k) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (num > 99 && !(num % 2))
                            st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};
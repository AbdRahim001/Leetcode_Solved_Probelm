class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = (int)code.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            if (k > 0) {
                for (int j = 0; j < k; j++) {
                    temp += code[(i + 1 + j) % n];
                }

            } else {
                for (int j = 0; j < -k; j++) {
                    temp += code[((i - 1 - j) % n + n) % n];
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
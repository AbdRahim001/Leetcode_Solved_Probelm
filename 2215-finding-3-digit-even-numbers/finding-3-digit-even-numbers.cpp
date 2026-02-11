class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        sort(digits.begin(), digits.end());
        vector<int> result;
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] % 2 == 0) {
                for (int j = 0; j < digits.size(); j++) {
                    for (int k = 0; k < digits.size(); k++) {
                        int temp = 100 * digits[k] + 10 * digits[j] + digits[i];
                        if (temp / 100 > 0 && i != j && j != k && i != k) {
                            result.push_back(temp);
                        }
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        auto it = unique(result.begin(), result.end());
        result.erase(it, result.end());
        return result;
    }
};
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        for (int i = 0; i < A.size(); i++) {
            int count = 0;
            vector<int> temp1 = A;
            vector<int> temp2 = B;

            sort(temp1.begin(), temp1.begin() + i + 1);
            sort(temp2.begin(), temp2.begin() + i + 1);
            for (int j = 0; j <= i; j++) {
                if (temp1[j] ==
                    *find(temp2.begin(), temp2.begin() + i, temp1[j])) {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};
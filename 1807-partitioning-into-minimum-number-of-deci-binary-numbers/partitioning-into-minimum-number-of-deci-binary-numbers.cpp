class Solution {
public:
    int minPartitions(string n) {
        set<int> digit;
        for (int i = 0; i < n.size(); i++) {
            int temp = n[i] - '0';
            digit.insert(temp);
        }
        return *digit.rbegin();
    }
};
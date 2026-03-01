class Solution {
public:
    int minPartitions(string n) {
        int high = -1;
        for (int i = 0; i < n.size(); i++) {
            int temp = n[i] - '0';
            if (high < temp) {
                high = temp;
            }
        }
        return high;
    }
};
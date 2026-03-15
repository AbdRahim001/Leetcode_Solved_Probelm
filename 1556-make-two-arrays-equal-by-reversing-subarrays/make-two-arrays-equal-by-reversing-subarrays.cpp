class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int, int> mp1;
        map<int, int> mp2;

        for (int i = 0; i < target.size(); i++) {
            mp1[target[i]]++;
            mp2[arr[i]]++;
        }
        for (int i = 0; i < mp1.size();i++) {
            if (mp1[i] != mp2[i]) {
                return false;
            }
        }
        return true;
    }
};
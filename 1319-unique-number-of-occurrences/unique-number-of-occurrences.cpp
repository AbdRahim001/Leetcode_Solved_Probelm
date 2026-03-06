class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        vector<int> vct;
        set<int> st;
        for (auto i : mp) {
            vct.push_back(i.second);
            st.insert(i.second);
        }
        if (vct.size() == st.size()) {
            return true;
        }
        return false;
    }
};
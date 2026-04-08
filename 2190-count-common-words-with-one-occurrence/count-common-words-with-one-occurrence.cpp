class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        set<string> st;
        for (auto i : words2)
            st.insert(i);
        map<string, int> mp1, mp2;
        for (auto i : words1)
            mp1[i]++;
        for (auto i : words2)
            mp2[i]++;
        int result = 0;
        for (auto i : st)
            if (mp1[i] == 1 && mp2[i] == 1)
                result++;
        return result;
    }
};
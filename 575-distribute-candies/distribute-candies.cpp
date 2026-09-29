class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int c = candyType.size() / 2;
        set<int> st;
        for (auto i : candyType) {
            st.insert(i);
        }
        return min(c, (int)st.size());
    }
};
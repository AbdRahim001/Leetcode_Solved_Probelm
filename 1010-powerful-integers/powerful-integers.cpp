class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> st;

        for (int i = 1; i <= bound; i *= x) {
            for (int j = 1; j <= bound; j *= y) {
                int temp = i + j;
                if (temp <= bound) {
                    st.insert(temp);
                }
                if (y == 1)
                    break;
            }
            if (x == 1)
                break;
        }
        vector<int> ans;
        for (auto i : st) {
            ans.push_back(i);
        }
        return ans;
    }
};
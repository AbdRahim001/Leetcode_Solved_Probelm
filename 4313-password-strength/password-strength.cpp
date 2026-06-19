class Solution {
public:
    int passwordStrength(string password) {
        set<char> st;
        for (auto i : password)
            st.insert(i);
        int point = 0;
        for (auto i : st) {
            if (i >= 'a' && i <= 'z')
                point += 1;
            else if (i >= 'A' && i <= 'Z')
                point += 2;
            else if (i >= '0' && i <= '9')
                point += 3;
            else
                point += 5;
        }
        return point;
    }
};
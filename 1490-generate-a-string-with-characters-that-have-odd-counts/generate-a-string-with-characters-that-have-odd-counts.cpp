class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        if (n % 2 == 0) {
            int a = n - 1;
            while (a--) {
                s.push_back('a');
            }
            s.push_back('b');
        } else {
            while (n--) {
                s.push_back('a');
            }
        }
        return s;
    }
};
class Solution {
public:
    string reverseByType(string s) {
        int left = 0, right = s.length() - 1;

        while (left <= right) {
            char a = s[left];
            char b = s[right];
            if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            if (a < 'a' || a > 'z') {
                left++;
            }
            if (b < 'a' || b > 'z') {
                right--;
            }
        }

        left = 0, right = s.length() - 1;
        while (left <= right) {
            char a = s[left];
            char b = s[right];
            if ((a < 'a' || a > 'z') && (b < 'a' || b > 'z')) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            if (a >= 'a' && a <= 'z') {
                left++;
            }
            if (b >= 'a' && b <= 'z') {
                right--;
            }
        }
        return s;
    }
};
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int left = 0;
        int right = s.size() - 1;
        if (s[0] == '-')
            left++;
        while (left <= right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        long long int a = stoll(s);
        if (a > INT_MAX || a < INT_MIN) {
            return 0;
        }
        return (int)a;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int n = min(num1.size(), num2.size());
        string s = "";
        int carry = 0;
        int i = 0;
        for (; i < n; i++) {
            int a = num1[i] - '0';
            int b = num2[i] - '0';
            if (a + b + carry > 9) {
                s.push_back((a + b + carry) % 10 + '0');
                carry = (a + b + carry) / 10;
            } else {
                s.push_back(a + b + carry + '0');
                carry = 0;
            }
        }
        while (i < num1.size()) {
            int sum = (num1[i] - '0') + carry;
            s.push_back(sum % 10 + '0');
            carry = sum / 10;
            i++;
        }
        while (i < num2.size()) {
            int sum = (num2[i] - '0') + carry;
            s.push_back(sum % 10 + '0');
            carry = sum / 10;
            i++;
        }
        if (carry > 0)
            s.push_back(carry + '0');
        reverse(s.begin(), s.end());
        return s;
    }
};
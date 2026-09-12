class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string output;
        char carry = '0';
        int len = min(a.size(), b.size());
        int pos;
        for (int i = 0; i < len; i++) {
            if (a[i] == '1' && b[i] == '1') {
                if (carry == '1') {
                    output.push_back('1');
                    carry = '1';
                } else {
                    output.push_back('0');
                    carry = '1';
                }
            } else if (a[i] == '1' && b[i] == '0') {
                if (carry == '1') {
                    output.push_back('0');
                    carry = '1';
                } else {
                    output.push_back('1');
                    carry = '0';
                }
            } else if (a[i] == '0' && b[i] == '1') {
                if (carry == '1') {
                    output.push_back('0');
                    carry = '1';
                } else {
                    output.push_back('1');
                    carry = '0';
                }
            } else {
                if (carry == '1') {
                    output.push_back('1');
                    carry = '0';
                } else {
                    output.push_back('0');
                    carry = '0';
                }
            }
            pos = i;
        }
        pos++;
        int k = max(a.size(), b.size()) - len;
        bool flag = false;
        if (a.size() >= b.size()) {
            flag = true;
        }
        while (k--) {
            if (flag) {
                if (a[pos] == '1') {
                    if (carry == '1') {
                        output.push_back('0');
                        carry = '1';
                    } else {
                        output.push_back('1');
                        carry = '0';
                    }
                } else {
                    if (carry == '1') {
                        output.push_back('1');
                        carry = '0';
                    } else {
                        output.push_back('0');
                        carry = '0';
                    }
                }
            } else {
                if (b[pos] == '1') {
                    if (carry == '1') {
                        output.push_back('0');
                        carry = '1';
                    } else {
                        output.push_back('1');
                        carry = '0';
                    }
                } else {
                    if (carry == '1') {
                        output.push_back('1');
                        carry = '0';
                    } else {
                        output.push_back('0');
                        carry = '0';
                    }
                }
            }
            pos++;
        }
        if (carry == '1')
            output.push_back('1');
        reverse(output.begin(), output.end());
        return output;
    }
};
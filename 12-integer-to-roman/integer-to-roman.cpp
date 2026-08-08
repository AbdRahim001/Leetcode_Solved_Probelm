class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums;
        string s = "";
        while (num) {
            nums.push_back(num % 10);
            num /= 10;
        }
        int len = nums.size();
        for (int i = len - 1; i >= 0; i--) {
            int temp = nums[i] * pow(10, i);
            if (temp >= 1000 && temp <= 9000) {
                int n = temp / 1000;
                while (n != 0) {
                    s.push_back('M');
                    n--;
                }
            } else if (temp >= 100 && temp <= 900) {
                int n = temp / 100;
                if (n == 9) {
                    s.push_back('C');
                    s.push_back('M');
                    n -= 9;
                }
                if (n >= 5) {
                    s.push_back('D');
                    n -= 5;
                }
                if (n == 4) {
                    s.push_back('C');
                    s.push_back('D');
                    n -= 4;
                }
                if (n < 5) {
                    while (n != 0) {
                        s.push_back('C');
                        n--;
                    }
                }
            } else if (temp >= 10 && temp <= 90) {
                int n = temp / 10;
                if (n == 9) {
                    s.push_back('X');
                    s.push_back('C');
                    n -= 9;
                }
                if (n >= 5) {
                    s.push_back('L');
                    n -= 5;
                }
                if (n == 4) {
                    s.push_back('X');
                    s.push_back('L');
                    n -= 4;
                }
                if (n < 5) {
                    while (n != 0) {
                        s.push_back('X');
                        n--;
                    }
                }
            } else {
                if (temp == 9) {
                    s.push_back('I');
                    s.push_back('X');
                    temp -= 9;
                }
                if (temp >= 5) {
                    s.push_back('V');
                    temp -= 5;
                }
                if (temp == 4) {
                    s.push_back('I');
                    s.push_back('V');
                    temp -= 4;
                }
                if (temp < 5) {
                    while (temp != 0) {
                        s.push_back('I');
                        temp--;
                    }
                }
            }
        }
        return s;
    }
};
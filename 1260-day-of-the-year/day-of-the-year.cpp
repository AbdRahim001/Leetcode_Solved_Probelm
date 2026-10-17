class Solution {
public:
    bool isleapyear(int year) {
        return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0);
    }
    int dayOfYear(string date) {
        string s = date.substr(8, 2);
        int day = stoi(s);
        s = date.substr(5, 2);
        int month = stoi(s);
        s = date.substr(0, 4);
        int year = stoi(s);
        vector<int> daycount = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int ans = 0;
        for (int i = 0; i < month - 1; i++) {
            ans += daycount[i];
        }
        ans += day;
        if (isleapyear(year) && month > 2) {
            ans += 1;
        }
        return ans;
    }
};
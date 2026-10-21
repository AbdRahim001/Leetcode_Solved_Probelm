class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<int> leapYear = {1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000,
                                2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032,
                                2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064,
                                2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096};

        vector<string> dayname = {"Friday",  "Saturday",  "Sunday",  "Monday",
                                  "Tuesday", "Wednesday", "Thursday"};

        vector<int> monthsize = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};

        int x = lower_bound(leapYear.begin(), leapYear.end(), year) -
                leapYear.begin();

        int y = year - 1971;

        int daycount = y * 365 + x;

        int monthcount = month - 1;
        int ans = 0;

        for (int i = 0; i < monthcount; i++) {
            ans += monthsize[i];
        }
        if (month > 2 && year % 4 == 0 &&
            (year % 100 != 0 || year % 400 == 0)) {
            ans++;
        }

        ans += day - 1;

        daycount += ans;

        int z = daycount % 7;

        return dayname[z];
    }
};
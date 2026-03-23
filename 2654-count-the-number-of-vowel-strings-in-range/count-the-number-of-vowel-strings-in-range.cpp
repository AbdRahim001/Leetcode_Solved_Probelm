class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int start = 0;
        int count = 0;
        for (auto i : words) {
            if (start < left) {
                start++;
                continue;
            } else if (i.size() == 1 && (i == "a" || i == "e" || i == "i" ||
                                         i == "o" || i == "u")) {
                count++;

            } else if ((*i.begin() == 'a' || *i.begin() == 'e' ||
                        *i.begin() == 'i' || *i.begin() == 'o' ||
                        *i.begin() == 'u') &&
                       (*(i.end() - 1) == 'a' || *(i.end() - 1) == 'e' ||
                        *(i.end() - 1) == 'i' || *(i.end() - 1) == 'o' ||
                        *(i.end() - 1) == 'u')) {
                count++;
            }
            if (start == right) {
                break;
            }
            start++;
        }
        return count;
    }
};
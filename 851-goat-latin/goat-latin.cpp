class Solution {
public:
    string toGoatLatin(string sentence) {
        int len = sentence.length();
        string part = "";
        string ans;
        int z = 1;
        for (int i = 0; i < len; i++) {
            if (sentence[i] != ' ') {
                part.push_back(sentence[i]);
            } else if (sentence[i] == ' ' || i == len - 1) {
                if (*part.begin() == 'a' || *part.begin() == 'e' ||
                    *part.begin() == 'i' || *part.begin() == 'o' ||
                    *part.begin() == 'u' || *part.begin() == 'A' ||
                    *part.begin() == 'E' || *part.begin() == 'I' ||
                    *part.begin() == 'O' || *part.begin() == 'U') {
                    ans.append(part);
                    ans.append("ma");
                    for (int k = 0; k < z; k++)
                        ans.append("a");
                    z++;

                } else if (*part.begin() != 'a' && *part.begin() != 'e' &&
                           *part.begin() != 'i' && *part.begin() != 'o' &&
                           *part.begin() != 'u' && *part.begin() != 'A' &&
                           *part.begin() != 'E' && *part.begin() != 'I' &&
                           *part.begin() != 'O' && *part.begin() != 'U') {
                    for (int i = 1; i < part.size(); i++) {
                        ans.push_back(part[i]);
                    }
                    ans.push_back(part[0]);
                    ans.append("ma");
                    for (int k = 0; k < z; k++)
                        ans.append("a");
                    z++;
                }
                ans.push_back(' ');
                part = "";
            }
        }

        if (*part.begin() == 'a' || *part.begin() == 'e' ||
            *part.begin() == 'i' || *part.begin() == 'o' ||
            *part.begin() == 'u' || *part.begin() == 'A' ||
            *part.begin() == 'E' || *part.begin() == 'I' ||
            *part.begin() == 'O' || *part.begin() == 'U') {
            ans.append(part);
            ans.append("ma");
            for (int k = 0; k < z; k++)
                ans.append("a");
        } else {
            for (int i = 1; i < part.size(); i++) {
                ans.push_back(part[i]);
            }
            ans.push_back(part[0]);
            ans.append("ma");
            for (int k = 0; k < z; k++)
                ans.append("a");
        }
        return ans;
    }
};
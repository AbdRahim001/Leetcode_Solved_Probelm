class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            int valid = true;

            for (int j = 0; j < words[i].size(); j++) {
                bool point = false;
                for (int k = 0; k < allowed.size(); k++) {
                    if (words[i][j] == allowed[k]) {
                        point = true;
                        break;
                    }
                }
                if (!point) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                count++;
            }
        }
        return count;
    }
};
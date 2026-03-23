class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int> count;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string s_cpy = s;
            sort(s_cpy.begin(), s_cpy.end());
            if (*(s_cpy.end() - 1) >= 'a' && *(s_cpy.end() - 1) <= 'z') {
                int temp = s_cpy.size();
                count.push_back(temp);
            } else {
                long long a = stoll(s);
                count.push_back(a);
            }
        }
        return *max_element(count.begin(), count.end());
    }
};
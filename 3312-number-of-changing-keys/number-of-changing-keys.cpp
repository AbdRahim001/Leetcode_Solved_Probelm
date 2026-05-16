class Solution {
public:
    int countKeyChanges(string s) {
        int x = abs('A' - 'a');
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + x;
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++)
            if (s[i] != s[i + 1])
                count++;
        return count;
    }
};
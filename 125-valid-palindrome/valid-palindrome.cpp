class Solution {
public:
    bool isPalindrome(string s) {
            string s1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s1.push_back(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s1.push_back(s[i] + 32);
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            s1.push_back(s[i]);
        }
    }
    for (int i = 0; i < floor(s1.size() / 2); i++)
    {
        if (s1[i] != s1[s1.size() - i-1])
        {
            return false;
        }
    }
    return true;
    }
};
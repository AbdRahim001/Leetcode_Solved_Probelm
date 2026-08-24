class Solution {
public:
    bool check_palindrome(string S) {
        int left = 0;
        int right = S.size() - 1;
        while (left <= right) {
            if (S[left] != S[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool isPalindromic(string s) {
        string S = "";
        for (auto i : s) {
            int a = i;
            string bin = bitset<8>(a).to_string();
            S += bin;
        }
        bool result = check_palindrome(S);
        return result;
    }
};
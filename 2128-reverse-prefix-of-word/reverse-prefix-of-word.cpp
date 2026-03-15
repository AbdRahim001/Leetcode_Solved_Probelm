class Solution {
public:
    string reversePrefix(string word, char ch) {
        if (word.find(ch) == string::npos)
            return word;
        stack<char> sta;

        int i = 0;
        while (word[i] != ch) {
            sta.push(word[i]);
            i++;
        }
        sta.push(ch);

        int j = 0;
        while (word[j] != ch) {
            word[j] = sta.top();
            sta.pop();
            j++;
        }
        word[j] = sta.top();
        sta.pop();
        return word;
    }
};
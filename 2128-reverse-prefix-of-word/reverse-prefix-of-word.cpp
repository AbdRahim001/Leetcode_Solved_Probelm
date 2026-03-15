//--Without using Stack TC->O(n) & SC->O(n)
//--Using two pointer TC->O(n) & SC->O(1)
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = word.find(ch);
        if (pos == string::npos)
            return word;
        int left = 0, right = pos;
        while (left <= right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }
        return word;
    }
};
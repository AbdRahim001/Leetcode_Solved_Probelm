class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> vct(26, 0);
        for (auto i : text) {
            vct[i - 'a']++;
        }
        int a = vct['b' - 'a'];
        a = min(a, vct['a' - 'a']);
        a = min(a, vct['l' - 'a'] / 2);
        a = min(a, vct['o' - 'a'] / 2);
        a = min(a, vct['n' - 'a']);
        return a;
    }
};
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s = "";
        for (auto i : words) {
            int temp = 0;
            for (int j = 0; j < i.size(); j++)
                temp += weights[i[j] - 'a'];
            s.push_back('z' - temp % 26);
        }
        return s;
    }
};
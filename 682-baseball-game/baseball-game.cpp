class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vct;
        for (auto i : operations) {
            if (i == "C") {
                vct.pop_back();
            } else if (i == "D") {
                int temp = *(vct.end() - 1);
                vct.push_back(2 * temp);
            } else if (i == "+") {
                int temp = *(vct.end() - 1) + *(vct.end() - 2);
                vct.push_back(temp);
            } else if (i == "-") {
                int temp = *(vct.end() - 1) - *(vct.end() - 2);
                vct.push_back(temp);
            } else if (i == "*") {
                int temp = *(vct.end() - 1) * *(vct.end() - 2);
                vct.push_back(temp);
            } else if (i == "/") {
                int temp = *(vct.end() - 1) / *(vct.end() - 2);
                vct.push_back(temp);
            } else {
                vct.push_back(stoi(i));
            }
        }
        return accumulate(vct.begin(), vct.end(), 0);
    }
};
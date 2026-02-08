class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int high = 0;
        for (int i = 0; i < heights.size(); i++) {
            for (int j = i; j < heights.size(); j++) {
                if (heights[i] < heights[j]) {
                    high = j;
                    swap(heights[i], heights[high]);
                    swap(names[i], names[high]);
                }
            }
        }
        return names;
    }
};
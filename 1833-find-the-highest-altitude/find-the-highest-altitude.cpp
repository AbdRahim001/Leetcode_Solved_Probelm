class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes;
        altitudes.push_back(0);
        for (int i = 0; i < gain.size(); i++) {
            int temp = altitudes[i] + gain[i];
            altitudes.push_back(temp);
        }
        return *max_element(altitudes.begin(), altitudes.end());
    }
};
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
            vector<double>average;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size()/2; i++)
    {
        double temp=(nums[i]+nums[nums.size()-1-i]);
        average.push_back(temp/2);
    }
    return *min_element(average.begin(),average.end());
    }
};
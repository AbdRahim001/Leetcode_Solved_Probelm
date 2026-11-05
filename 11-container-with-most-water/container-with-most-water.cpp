class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int total = 0;
        int temp = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            temp = (right - left) * min(height[left], height[right]);
            total = max(temp, total);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return total;
    }
};
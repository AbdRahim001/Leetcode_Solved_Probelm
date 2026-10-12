class Solution {
public:
    vector<int> constructRectangle(int area) {
        int a = 1, b = area;
        int diff = abs(a - b);
        int A = a, B = b;
        while (a <= b) {
            if (area % a == 0) {
                b = area / a;
                if (diff > abs(a - b)) {
                    A = a;
                    B = b;
                    diff = abs(a - b);
                }
            }
            a++;
        }
        return {B, A};
    }
};
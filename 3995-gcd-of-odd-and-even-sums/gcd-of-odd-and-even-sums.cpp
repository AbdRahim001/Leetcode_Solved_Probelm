class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for (int i = 1; i <= 2 * n; i++) {
            if (i % 2 == 0)
                sumEven += i;
            else
                sumOdd += i;
        }
        while (sumEven != sumOdd) {
            if (sumEven == 0 || sumOdd == 0)
                return sumEven + sumOdd;
            if (sumEven > sumOdd)
                sumEven -= sumOdd;
            else
                sumOdd -= sumEven;
        }
        return sumEven;
    }
};
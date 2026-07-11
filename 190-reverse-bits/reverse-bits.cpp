class Solution {
public:
    int reverseBits(int n) {
        vector<int> vct;
        while (n != 0) {
            if (n % 2 == 0)
                vct.push_back(0);
            else
                vct.push_back(1);
            n /= 2;
        }
        int len = vct.size();
        for (int i = len; i < 32; i++)
            vct.push_back(0);
        reverse(vct.begin(), vct.end());
        len = vct.size();
        long long int newNum = 0;
        for (int i = 0; i < len; i++)
            newNum += vct[i] * pow(2, i);
        return newNum;
    }
};
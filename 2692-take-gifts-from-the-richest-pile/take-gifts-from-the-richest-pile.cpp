class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (long long int i = 0; i < k; i++) {
            auto it = max_element(gifts.begin(), gifts.end());
            long long int mx = *it;
            long long int mx_loc = it - gifts.begin();
            gifts[mx_loc] = (long long int)sqrt((long long int)mx);
        }
        return accumulate(gifts.begin(), gifts.end(), (long long)0);
    }
};
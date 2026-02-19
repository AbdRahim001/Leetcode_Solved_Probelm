class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr3;
        vector<int> arr4;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr1[j] == arr2[i]) {
                    arr3.push_back(arr1[j]);
                }
            }
        }
        for (int i = 0; i < arr1.size(); i++) {
            bool flag = true;
            int p;
            for (int j = 0; j < arr2.size(); j++) {
                if (arr1[i] == arr2[j]) {
                    flag = false;
                }
                if (flag) {
                    p = i;
                }
            }
            if (flag) {
                arr4.push_back(arr1[i]);
            }
        }
        sort(arr4.begin(), arr4.end());
        arr3.insert(arr3.end(), arr4.begin(), arr4.end());
        return arr3;
    }
};
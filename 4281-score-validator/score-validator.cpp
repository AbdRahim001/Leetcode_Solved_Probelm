class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;
        for (auto i : events) {
            if (counter == 10)
                break;
            if (i == "0")
                score += 0;
            else if (i == "1")
                score += 1;
            else if (i == "2")
                score += 2;
            else if (i == "3")
                score += 3;
            else if (i == "4")
                score += 4;
            else if (i == "5")
                score += 5;
            else if (i == "6")
                score += 6;
            else if (i == "WD")
                score += 1;
            else if (i == "NB")
                score += 1;
            else if (i == "W")
                counter += 1;
        }
        return {score, counter};
    }
};
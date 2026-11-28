class Solution {
public:
    string convertDateToBinary(string date) {
        string a = date.substr(0, 4);
        string b = date.substr(5, 2);
        string c = date.substr(8, 2);
        int y = stoi(a);
        int m = stoi(b);
        int d = stoi(c);
        string Y = format("{:b}", y);
        string M = format("{:b}", m);
        string D = format("{:b}", d);
        return Y + "-" + M + "-" + D;
    }
};
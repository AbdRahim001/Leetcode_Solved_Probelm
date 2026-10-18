class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int pos = num1.find('+', 1);
        int a = stoi(num1.substr(0, pos));
        int b = stoi(num1.substr(pos + 1));
        pos = num2.find('+', 1);
        int c = stoi(num2.substr(0, pos));
        int d = stoi(num2.substr(pos + 1));
        int real = a * c - b * d;
        int comp = a * d + b * c;
        string Real = to_string(real);

        string Comp = to_string(comp);
        string result = Real + "+" + Comp + "i";
        return result;
    }
};
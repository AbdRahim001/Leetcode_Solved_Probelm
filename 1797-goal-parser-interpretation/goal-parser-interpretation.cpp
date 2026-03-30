class Solution {
public:
    string interpret(string command) {
        string S;
        for (int i = 0; i < command.size() - 1; i++) {
            if (command[i] >= 'a' && command[i] <= 'z' ||
                command[i] >= 'A' && command[i] <= 'Z')
                S.push_back(command[i]);
            else if (command[i] == '(' && command[i + 1] == ')')
                S.push_back('o');
        }
        if (command[command.size() - 1] >= 'a' &&
                command[command.size() - 1] <= 'z' ||
            command[command.size() - 1] >= 'A' &&
                command[command.size() - 1] <= 'Z')
            S.push_back(command[command.size() - 1]);
        return S;
    }
};
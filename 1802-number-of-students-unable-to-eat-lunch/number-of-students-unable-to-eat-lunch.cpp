class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stQ;
        queue<int> swQ;
        for (int i = 0; i < students.size(); i++) {
            stQ.push(students[i]);
            swQ.push(sandwiches[i]);
        }
        int i = 0;
        while (swQ.size() != 0) {
            if (stQ.front() == swQ.front()) {
                stQ.pop();
                swQ.pop();
                i = 0;
            } else {
                i++;
                stQ.push(stQ.front());
                stQ.pop();
            }
            if (i > stQ.size())
                break;
        }
        return stQ.size();
    }
};
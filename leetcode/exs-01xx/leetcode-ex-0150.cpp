class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<int> s;
        for (auto &token: tokens) {
            if (isdigit(token[token.size() - 1])) {
                s.emplace(stoi(token));
                continue;
            }
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            switch (token[0]) {
                case '+':
                    s.emplace(operand1 + operand2);
                    break;
                case '-':
                    s.emplace(operand1 - operand2);
                    break;
                case '*':
                    s.emplace(operand1 * operand2);
                    break;
                case '/':
                    s.emplace(operand1 / operand2);
                    break;
            }
        }
        return s.top();
    }
};
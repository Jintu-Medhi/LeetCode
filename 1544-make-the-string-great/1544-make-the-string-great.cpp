class Solution {
public:
    string makeGood(string s) {
        int size = s.size();
        stack<char> stk;
        for (int i = 0; s[i] != '\0'; i++) {
            char c = s[i];
            if (!stk.empty() && ((c == stk.top() + 32) || (c == stk.top() - 32))) {
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        return printStack(stk);
    }

    string printStack(stack<char> s) {
        if (s.empty()) {
            return "";
        }
        char x = s.top();
        s.pop();
        string result = printStack(s);
        result += x;
        return result;
    }
};
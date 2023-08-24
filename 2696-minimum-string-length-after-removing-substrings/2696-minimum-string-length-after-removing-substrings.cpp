class Solution {
public:
    int minLength(string s) {
        int size = s.size();
        stack<char> stk;
        for (int i = 0; i < size; i++) {
            char c = s[i];
            if (!stk.empty() && ((c == 'B' && stk.top() == 'A') || (c == 'D' && stk.top() == 'C'))) {
            stk.pop();
        }
        else {
            stk.push(c);
        }
    }
    return stk.size();
    }
};
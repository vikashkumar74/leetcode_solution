class Solution {
public:
    bool checkValidString(string s) {
      stack<int> leftParenStack;
        stack<int> starStack;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                leftParenStack.push(i);
            } else if (s[i] == '*') {
                starStack.push(i);
            } else {
                if (!leftParenStack.empty()) {
                    leftParenStack.pop();
                } else if (!starStack.empty()) {
                    starStack.pop();
                } else {
                    return false;
                }
            }
        }
        
        while (!leftParenStack.empty()) {
            if (starStack.empty()) {
                return false;
            } else if (leftParenStack.top() < starStack.top()) {
                leftParenStack.pop();
                starStack.pop();
            } else {
                return false;
            }
        }
        
        return true;
    }
};

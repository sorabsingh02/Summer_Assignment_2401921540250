class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        string current = "";
        int num = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                numStack.push(num);
                strStack.push(current);
                current = "";
                num = 0;
            } else if (c == ']') {
                string temp = current;
                current = strStack.top();
                strStack.pop();
                
                int count = numStack.top();
                numStack.pop();
                
                for (int i = 0; i < count; i++) {
                    current += temp;
                }
            } else {
                current += c;
            }
        }
        
        return current;
    }
};

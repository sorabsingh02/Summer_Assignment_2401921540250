class Solution {
public:
    int compress(vector<char>& chars) {
        int w = 0;
        int i = 0;     
        while (i < chars.size()) {
            char currentChar = chars[i];
            int count = 0;
            
            while (i < chars.size() && chars[i] == currentChar) {
                count++;
                i++;
            }
            
            chars[w] = currentChar;
            w++;
            
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[w] = c;
                    w++;
                }
            }
        }
        
        return w;
    }
};

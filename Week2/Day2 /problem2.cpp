class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        
        vector<int> s1Count(26, 0);
        vector<int> window(26, 0);
        
        for (char c : s1) {
            s1Count[c - 'a']++;
        }
        
        for (int i = 0; i < s2.length(); i++) {
            window[s2[i] - 'a']++;
            
            if (i >= s1.length()) {
                window[s2[i - s1.length()] - 'a']--;
            }
            
            if (window == s1Count) {
                return true;
            }
        }
        
        return false;
    }
};

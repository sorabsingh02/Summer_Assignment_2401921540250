class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        
        if (p.length() > s.length()) {
            return result;
        }
        
        vector<int> pCount(26, 0);
        vector<int> window(26, 0);
        
        for (char c : p) {
            pCount[c - 'a']++;
        }
        
        for (int i = 0; i < s.length(); i++) {
            window[s[i] - 'a']++;
            
            if (i >= p.length()) {
                window[s[i - p.length()] - 'a']--;
            }
            
            if (window == pCount) {
                result.push_back(i - p.length() + 1);
            }
        }
        
        return result;
    }
};

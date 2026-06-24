class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto x:strs){
            string key=x;
            sort(key.begin(),key.end());
            mp[key].push_back(x);
        }
        vector<vector<string>>result;
        for(auto &n:mp){
            result.push_back(n.second);
        }
        return result;
        
    }
};

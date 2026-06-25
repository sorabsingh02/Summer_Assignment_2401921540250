class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int n:nums2){
            while(!st.empty()&&st.top()<n){
                mp[st.top()]=n;  // check next greater element//
                st.pop();
            }
            st.push(n);

        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        vector<int> ans;
        for(int a:nums1){
            ans.push_back(mp[a]);

        }
        return ans;
    }
};

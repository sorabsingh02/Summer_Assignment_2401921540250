class Solution {
public:
    void ans(int start,int end,string s,int n,vector<string>&vt){
        if(start==end && start+end==2*n){
            vt.push_back(s);
            return;
        }
        if(start<n){
            ans(start+1,end,s+"(",n,vt);
        }
        if(end<start){
            ans(start,end+1,s+")",n,vt);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>vt;
        ans(0,0,"",n,vt);
        return vt;
    }
};

class Solution {
public:
    bool isValid(string s) {
        int x=s.size();
        stack<char> a;
        if(x%2==1){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                a.push(s[i]);
            }
            else{
                if(a.empty()) return false;
                char top=a.top();
                a.pop();
                if((s[i]==')'&&top!='(')||(s[i]=='}'&&top!='{')||(s[i]==']'&&top!='[')) return false;
            }
        }
        return a.empty();
    }
};

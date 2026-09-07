class Solution {
public:
    string removeOuterParentheses(string s) {
        int level=0;
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                
                if(level>0){
                    result+=s[i];
                }
                level++;
            }
            else if(s[i]==')'){
                level--;
                if(level>0){
                    result+=s[i];
                }
            }
        }
        return result;
    }
};
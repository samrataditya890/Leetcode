class Solution {
public:
    int maxDepth(string s) {
         int level=0,depth=0;
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                level++;
                
            }
            else if(s[i]==')'){
                level--;
            }
            depth=max(depth,level);
        }
        return depth;
    }
};
class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        
        for(int i=0;i<s.size();i++){
            int k=s[i];
            if(isupper(k)){
               s[i]= tolower(k);
                ans+=s[i];
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
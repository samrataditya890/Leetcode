class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }

        if(pattern.size()!=words.size()){
            return false;
        }

        unordered_map<char,string> ctos;
        unordered_map<string,char> stoc;
        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            string w=words[i];

          if(ctos.count(ch)){
              if(ctos[ch]!=w){
                return false;
              }
           }  
          else{
                ctos[ch]=w;
            } 
        if(stoc.count(w)){
            if(stoc[w]!=ch){
                return false;
            }
        }else{
            stoc[w]=ch;
        }
        }
        return true;

       
    }
};
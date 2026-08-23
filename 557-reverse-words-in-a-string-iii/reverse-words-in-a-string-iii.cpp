class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            words.push_back(word);
        }
        string temp;
        for(int i=0;i<words.size();i++){
            temp=temp+words[i];
            temp=temp+" ";
        }
        temp.pop_back();
        return temp;
    }
};
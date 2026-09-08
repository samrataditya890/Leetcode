class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mapp;
        for(int i=0;i<s.size();i++){
            mapp[s[i]]++;
        }
        vector<pair<char,int>> ans;

        for(auto x : mapp) {
          ans.push_back(x);
        }
        sort(ans.begin(),ans.end(),[](auto a,auto b){
            return a.second>b.second;
        });
        string temp;
       for(int i=0;i<ans.size();i++){
           while(ans[i].second>0){
            temp+=ans[i].first;
            ans[i].second--;
           }
        }
        return temp;

    }
};
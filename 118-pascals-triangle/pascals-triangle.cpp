class Solution {
public:
 vector<int> genrow(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int i=1;i<=row;i++){
            ans=ans*(row-i+1);
            ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            ans.push_back(genrow(i));
        }
        return ans;
    }
};
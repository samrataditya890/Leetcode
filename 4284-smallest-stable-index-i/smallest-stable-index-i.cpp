class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> temp;
        

        for(int i=0;i<nums.size();i++){
            int n=i+1;
            int stable=*max_element(nums.begin(),nums.begin()+i+1)-*min_element(nums.begin()+i,nums.end());
            if(stable<=k){
                return i;
            }
        }

        return -1;
    }
};
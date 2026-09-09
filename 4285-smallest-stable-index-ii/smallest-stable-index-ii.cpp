class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        

         int n = nums.size();

        vector<int> suffix(n);

        suffix[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--) {
            suffix[i] = min(nums[i], suffix[i+1]);
        }

        int leftMax = INT_MIN;

        for(int i = 0; i < n; i++) {

            leftMax = max(leftMax, nums[i]);

            int stable = leftMax - suffix[i];

            if(stable <= k) {
                return i;
            }
        }

        return -1;
    }
};
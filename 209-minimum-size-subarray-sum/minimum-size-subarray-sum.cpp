class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int minwindow=INT_MAX;
        int currentsum=0;
        while(j<nums.size()){
            currentsum+=nums[j];
            j++;
            while(currentsum>=target){
                int currentwin=j-i;
                minwindow=min(minwindow,currentwin);
                currentsum-=nums[i];
                i++;
            }
        }

        if(minwindow==INT_MAX){
            return 0;
        }
        else{
            return minwindow;
        }
    }
};
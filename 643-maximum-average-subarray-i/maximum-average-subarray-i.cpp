class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int sum=0;
        int maxi=INT_MIN;
        while(j<n){
            if(j-i+1<=k){
                sum+=nums[j];
                if(j-i+1==k){
                   maxi=max(maxi,sum);}
                    j++;
                
            }
            else if(j-i+1>k){
               
                sum+=nums[j]-nums[i];
                i++;
                 maxi=max(maxi,sum);
                j++;
            }
        
        }
        return (double)maxi/k;

    }
};
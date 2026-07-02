class Solution {
public:
    int maxArea(vector<int>& height) {
        // we are using two pointer methode
        int n=height.size();
        int lp=0 , rp=n-1;
        int maxWater=0;
        while(lp<rp){
            int wd=rp-lp;
            int hig=min(height[lp],height[rp]);
            int areaWater=wd*hig;
            maxWater=max(maxWater,areaWater);

            height[lp]<height[rp]?lp++:rp--;
        }

        return maxWater;
    }
};
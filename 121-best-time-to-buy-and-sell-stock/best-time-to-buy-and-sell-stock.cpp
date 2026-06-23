class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int profit=0;
        for(int price : prices){
         if(price<mini){
            mini=price;
         }
         else{
         profit=max(profit,price-mini);
         }
        }

        return profit;
    }
};
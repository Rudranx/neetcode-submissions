class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int i=0;
        // int ans=0;

        // for(int j=0;j<prices.size();j++){
        //     if(prices[j]<=prices[i]){
        //         i++;
        //     }
        //     while(prices[j]>prices[i]){
        //         int profit=prices[j]-prices[i];
        //         j++;
        //         ans=max(ans,profit);
        //     }
        // }

        int bestbuy=prices[0];
        int maxprofit=0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<bestbuy){
                bestbuy=prices[i];
            }

            maxprofit=max(maxprofit,prices[i]-bestbuy);
        }
        return maxprofit;
    }
};

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         // int i=0;
        

//         int bestbuy=prices[0];
//         int maxprofit=0;

//         for(int i=1;i<prices.size();i++){
//             if(prices[i]<bestbuy){
//                 bestbuy=prices[i];
//             }

//             maxprofit=max(maxprofit,prices[i]-bestbuy);
//         }
//         return maxprofit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;   // Buy pointer (left edge of window)
        int right = 1;  // Sell pointer (right edge of window)
        int maxProfit = 0;

        while (right < prices.size()) {
            // Valid window: current sell price is higher than buy price
            if (prices[right] > prices[left]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            } else {
                // Invalid window: found a cheaper buy price!
                // Slide the left side directly to the current right position
                left = right;
            }
            // Always expand the window to the right
            right++;
        }

        return maxProfit;
    }
};

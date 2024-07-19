class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=0;
        int profit=0;
        int bday;
        int sday;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
                bday=i;
            }
            if((prices[i]-buy)>profit){
                profit=prices[i]-buy;
            }
        }
        return profit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maxProfit = 0;
     for ( int i=0; i<prices.size();i++){
        if (prices[i+1]>prices[i])
        maxProfit+= prices[i+1]- prices[i];
     }
     return maxProfit;
    }
    
};

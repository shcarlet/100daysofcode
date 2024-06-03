class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0;
        int maxp=0;
        while(j<prices.size())
        {
            if(prices[j]>prices[i])
            {
                maxp=max(maxp,(prices[j]-prices[i]));
            }
            else
            {
                i=j;
            }
            j++;
        }
        return maxp;
    }
};

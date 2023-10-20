class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int maxProfit = 0;
        int minPrice = prices[i];

        for (size_t i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
    }
};
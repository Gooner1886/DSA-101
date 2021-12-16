// Best Time to buy and sell stock 1 - Leetcode

int maxProfit(vector<int> &prices)
{
    int min_so_far = prices[0];
    int max_profit = INT_MIN;

    for (int i = 1; i < prices.size(); i++)
    {
        int profit = prices[i] - min_so_far;

        if (prices[i] < min_so_far)
        {
            min_so_far = prices[i];
        }
        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }
    if (max_profit < 0)
        max_profit = 0;
    return max_profit;
}
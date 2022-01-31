// Leetcode - 1672 - Richest Customer Wealth
int maximumWealth(vector<vector<int>> &accounts)
{
    int maxWealth = INT_MIN;
    for (int i = 0; i < accounts.size(); i++)
    {
        int currentMax = 0;
        for (int j = 0; j < accounts[0].size(); j++)
        {
            currentMax += accounts[i][j];
        }
        maxWealth = max(currentMax, maxWealth);
    }
    return maxWealth;
}
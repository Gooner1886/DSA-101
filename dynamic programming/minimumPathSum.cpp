// Leetcode - 64 - Minimum path sum

int minPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    if (m == 1 && n == 1)
    {
        return grid[0][0];
    }
    vector<vector<int>> dp(m, vector<int>(n));

    for (int i = 0; i < dp.size(); i++)
    {
        if (i == 0)
        {
            dp[i][0] = grid[i][0];
        }
        else
        {
            dp[i][0] = grid[i][0] + dp[i - 1][0];
        }
    }

    for (int i = 0; i < dp[0].size(); i++)
    {
        if (i == 0)
        {
            dp[0][i] = grid[0][i];
        }
        else
        {
            dp[0][i] = grid[0][i] + dp[0][i - 1];
        }
    }

    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[i].size(); j++)
        {
            int fromLeft = dp[i][j - 1] + grid[i][j];
            int fromUp = dp[i - 1][j] + grid[i][j];
            dp[i][j] = min(fromLeft, fromUp);
        }
    }
    return dp[m - 1][n - 1];
}
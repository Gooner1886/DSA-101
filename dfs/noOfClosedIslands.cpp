// Leetcode - 1254 - No. of Closed Islands
bool dfs(vector<vector<int>> &grid, int i, int j)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 1)
    {
        return true;
    }

    if (grid[i][j] == 0 && (i == 0 || i == grid.size() - 1 || j == 0 || j == grid[0].size() - 1))
    {
        return false;
    }

    bool ans = true;
    grid[i][j] = 1;
    ans &= dfs(grid, i + 1, j);
    ans &= dfs(grid, i - 1, j);
    ans &= dfs(grid, i, j + 1);
    ans &= dfs(grid, i, j - 1);
    return ans;
}

int closedIsland(vector<vector<int>> &grid)
{
    int noOfClosedIslands = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 0 && dfs(grid, i, j))
            {
                noOfClosedIslands++;
            }
        }
    }
    return noOfClosedIslands;
}
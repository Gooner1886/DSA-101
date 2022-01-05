// Leetcode - Island Perimeter

int perimeter = 0;
void dfs(vector<vector<int>> &grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
    {
        perimeter++;
        return;
    }
    if (grid[i][j] == 2)
    {
        return;
    }
    if (grid[i][j] == 0)
    {
        perimeter++;
        return;
    }
    if (grid[i][j] == 1)
    {
        grid[i][j] = 2;
        // cout << i <<","<< j <<endl;
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
}

int islandPerimeter(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                dfs(grid, i, j);
                return perimeter;
            }
        }
    }
    return 0;
}
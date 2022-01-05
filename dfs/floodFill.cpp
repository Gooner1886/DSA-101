// Leetcode - Floodfill

void dfs(vector<vector<int>> &image, int i, int j, int current, int row, int column, int nc)
{
    if (i < 0 || i >= row || j < 0 || j >= column || image[i][j] != current)
    {
        return;
    }
    if (image[i][j] == current)
    {
        image[i][j] = nc;
    }

    dfs(image, i, j + 1, current, row, column, nc);
    dfs(image, i + 1, j, current, row, column, nc);
    dfs(image, i, j - 1, current, row, column, nc);
    dfs(image, i - 1, j, current, row, column, nc);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int m = image.size();
    int n = image[0].size();
    if (image[sr][sc] != newColor)
    {
        dfs(image, sr, sc, image[sr][sc], m, n, newColor);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    return image;
}
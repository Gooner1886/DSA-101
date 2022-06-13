// Leetcode - 120 - Triangle
int minimumTotal(vector<vector<int>> &triangle)
{
    int n = triangle.size();
    vector<int> vec = triangle[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            vec[j] = triangle[i][j] + min(vec[j], vec[j + 1]);
        }
    }

    return vec[0];
}
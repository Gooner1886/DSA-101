// Leetcode - 74 - Search a 2D Matrix
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int end = m - 1;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (target >= matrix[i][start] && target <= matrix[i][end])
        {
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (matrix[i][mid] == target)
                    return true;
                else if (matrix[i][mid] < target)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }
    return false;
}
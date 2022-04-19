// Leetcode - 54 - Spiral Matrix
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> result;

    if (matrix.size() == 0)
        return result;

    int rowBegin = 0;
    int rowEnd = matrix.size() - 1;
    int columnBegin = 0;
    int columnEnd = matrix[0].size() - 1;

    while (rowBegin <= rowEnd && columnBegin <= columnEnd)
    {
        for (int i = columnBegin; i <= columnEnd; i++)
        {
            result.push_back(matrix[rowBegin][i]);
        }
        rowBegin++;

        for (int i = rowBegin; i <= rowEnd; i++)
        {
            result.push_back(matrix[i][columnEnd]);
        }
        columnEnd--;

        if (rowBegin <= rowEnd)
        {
            for (int i = columnEnd; i >= columnBegin; i--)
            {
                result.push_back(matrix[rowEnd][i]);
            }
        }
        rowEnd--;

        if (columnBegin <= columnEnd)
        {
            for (int i = rowEnd; i >= rowBegin; i--)
            {
                result.push_back(matrix[i][columnBegin]);
            }
        }
        columnBegin++;
    }
    return result;
}
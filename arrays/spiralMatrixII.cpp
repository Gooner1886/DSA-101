// Leetcode - 59 - Spiral Matrix
vector<vector<int>> generateMatrix(int n)
{
    int rowBegin = 0;
    int rowEnd = n - 1;
    int columnBegin = 0;
    int columnEnd = n - 1;
    int start = 1;
    vector<vector<int>> resultMatrix(n, vector<int>(n, 0));

    while (rowBegin <= rowEnd && columnBegin <= columnEnd)
    {
        for (int i = columnBegin; i <= columnEnd; i++)
        {
            resultMatrix[rowBegin][i] = start++;
        }
        rowBegin++;

        for (int i = rowBegin; i <= rowEnd; i++)
        {
            resultMatrix[i][columnEnd] = start++;
        }
        columnEnd--;

        if (rowBegin <= rowEnd)
        {
            for (int i = columnEnd; i >= columnBegin; i--)
            {
                resultMatrix[rowEnd][i] = start++;
            }
        }
        rowEnd--;

        if (columnBegin <= columnEnd)
        {
            for (int i = rowEnd; i >= rowBegin; i--)
            {
                resultMatrix[i][columnBegin] = start++;
            }
        }
        columnBegin++;
    }
    return resultMatrix;
}
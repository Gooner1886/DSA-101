// Leetcode - 48 - Rotate Image
void transpose(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix[0].size(); j++)
        {
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
}

void reverseMat(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size() / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrix.size() - j - 1];
            matrix[i][matrix.size() - j - 1] = temp;
        }
    }
}

void rotate(vector<vector<int>> &matrix)
{
    transpose(matrix);
    reverseMat(matrix);
}
// Leetcode - Pascal's Triangle

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> results;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> element;
        for (int j = 0; j <= i; j++)
        {

            if (i == j || j == 0)
            {
                element.push_back(1);
            }
            else
            {
                element.push_back(results[i - 1][j - 1] + results[i - 1][j]);
            }
        }
        results.push_back(element);
        element.clear();
    }
    return results;
}
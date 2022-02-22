// Leetcode - 171 - Excel sheet column number
int titleToNumber(string columnTitle)
{
    int n = columnTitle.size();

    int result = 0;
    int power = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        result += pow(26, power) * (columnTitle[i] - 64);
        power++;
    }
    return result;
}
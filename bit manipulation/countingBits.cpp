// Leetcode - 338 - Counting bits
vector<int> countBits(int n)
{
    vector<int> res(n + 1);
    res[0] = 0;
    if (n == 0)
    {
        return res;
    }

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int temp = i;
        while (temp > 0)
        {
            temp = temp & (temp - 1);
            count++;
        }
        res[i] = count;
    }
    return res;
}
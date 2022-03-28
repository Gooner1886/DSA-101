// Leetcode - 888 - Fair Candy Swap
vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
{
    vector<int> answer;
    int alicetotal = 0, bobtotal = 0;
    for (int i : aliceSizes)
    {
        alicetotal += i;
    }
    for (int j : bobSizes)
    {
        bobtotal += j;
    }

    int n = aliceSizes.size();
    int m = bobSizes.size();
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int diff = aliceSizes[i] - bobSizes[j];
            if ((alicetotal - diff) == (bobtotal + diff))
            {
                answer.push_back(aliceSizes[i]);
                answer.push_back(bobSizes[j]);
                return answer;
            }
        }
    }
    return answer;
}
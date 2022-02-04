// Leetcode - 525 - Contiguous Array
int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> um;
    int zerosCount = 0;
    int result;
    for (int i = 0; i < nums.size(); i++)
    {
        zerosCount += nums[i] == 0 ? -1 : 1;

        if (zerosCount == 0)
        {
            result = i + 1;
        }

        if (um.find(zerosCount) == um.end())
        {
            um[zerosCount] = i;
        }

        else
        {
            result = max(result, i - um[zerosCount]);
        }
    }
    return result;
}
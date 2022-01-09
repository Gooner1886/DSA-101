// Leetcode - 904 - Fruits into baskets
int totalFruit(vector<int> &fruits)
{
    int i = 0;
    int j = 0;
    int maxAns = 0;
    unordered_map<int, int> um;
    while (j < fruits.size() && i <= j)
    {
        um[fruits[j]]++;
        while (um.size() > 2)
        {
            if (um[fruits[i]] == 1)
            {
                um.erase(fruits[i]);
            }
            else
            {
                um[fruits[i]]--;
            }
            i++;
        }
        maxAns = max(maxAns, j - i + 1);
        j++;
    }
    return maxAns;
}
// Leetcode - 1217 - Minimum cost to move chips to the same position
int minCostToMoveChips(vector<int> &position)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < position.size(); i++)
    {
        if (position[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    return min(odd, even);
}
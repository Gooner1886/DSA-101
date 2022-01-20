// Leetcode - Koko eating Bananas - 875

int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int high = INT_MIN;

    for (auto x : piles)
    {
        high = max(x, high);
    }

    int hours = 0;
    while (low < high)
    {
        int mid = (low + high) / 2;
        hours = 0;

        for (auto x : piles)
            hours += (x + mid - 1) / mid;

        if (hours <= h)
            high = mid;

        else
            low = mid + 1;
    }
    return low;
}
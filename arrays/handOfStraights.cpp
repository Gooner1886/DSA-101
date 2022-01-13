// Leetcode - 846 - Hand of Straights
bool isNStraightHand(vector<int> &hand, int groupSize)
{
    if (hand.size() % groupSize != 0)
        return false;

    map<int, int> card_counts;
    for (int i = 0; i < hand.size(); i++)
    {
        if (!card_counts[hand[i]])
        {
            card_counts[hand[i]] = 1;
        }
        else
        {
            card_counts[hand[i]]++;
        }
    }

    while (card_counts.size() > 0)
    {
        auto it = card_counts.begin();
        int min_val = it->first;
        for (int i = min_val; i < min_val + groupSize; i++)
        {
            if (!card_counts[i])
            {
                return false;
            }
            else
            {
                if (card_counts[i] == 1)
                {
                    card_counts.erase(i);
                }
                else
                    card_counts[i]--;
            }
        }
    }
    return true;
}
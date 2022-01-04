// Leetcode - Boats to save people

int numRescueBoats(vector<int> &people, int limit)
{
    int trips = 0;
    sort(people.begin(), people.end());
    int i = 0;
    int j = people.size() - 1;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
        trips++;
    }
    return trips;
}
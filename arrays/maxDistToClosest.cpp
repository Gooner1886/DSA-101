// Leetcode - 849 - Maximum Distance to Closest Person
int maxDistToClosest(vector<int> &seats)
{

    int result = 0;
    int temp = 0;
    int pointer1 = -1;
    int pointer2 = -1;

    for (int i = 0; i < seats.size(); i++)
    {
        if (seats[i] == 1)
        {
            pointer2 = i;
            break;
        }
    }

    // for leading zeroes
    temp = pointer2 - pointer1 - 1;
    result = max(temp, result);

    // for zeroes between two 1s
    for (int i = pointer2 + 1; i < seats.size(); i++)
    {
        if (seats[i] == 1)
        {
            pointer1 = pointer2;
            pointer2 = i;
            temp = (pointer2 - pointer1) / 2;
            result = max(result, temp);
        }
    }

    // ending zeroes
    pointer1 = pointer2;
    pointer2 = seats.size();
    temp = pointer2 - pointer1 - 1;
    result = max(temp, result);

    return result;
}
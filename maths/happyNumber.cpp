// Leetcode - 202 - Happy Number
bool isHappy(int n)
{
    set<int> s;

    while (n != 1)
    {
        int current = n;
        int sum = 0;
        while (current)
        {
            sum += (current % 10) * (current % 10);
            current = current / 10;
        }

        if (s.count(sum))
        {
            return false;
        }

        s.insert(sum);
        n = sum;
    }
    return true;
}
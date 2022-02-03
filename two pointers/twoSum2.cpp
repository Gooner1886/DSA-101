// Leetcode - 167 - Two Sum 2
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> pair;
    int l = 0;
    int h = numbers.size() - 1;
    while (l < h)
    {
        if (numbers[l] + numbers[h] == target)
        {
            pair.push_back(l + 1);
            pair.push_back(h + 1);
            break;
        }
        else if (numbers[l] + numbers[h] > target)
            h--;
        else
            l++;
    }
    return pair;
}

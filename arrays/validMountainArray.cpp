// Leetcode - Valid Mountain Array

bool validMountainArray(vector<int> &arr)
{
    if (arr.size() < 3)
        return false;
    int check = 1;
    int toggle = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (check == 1)
        {
            if (arr[i] > arr[i - 1])
                continue;
            else if (arr[i] < arr[i - 1] && i == 1)
                return false;
            else if (arr[i] < arr[i - 1])
            {
                check = 0;
                toggle++;
            }
            else
                return false;
        }
        else if (check == 0)
        {
            if (arr[i] < arr[i - 1])
                continue;
            else if (arr[i] > arr[i - 1])
            {
                check = 1;
                toggle++;
            }
            else
                return false;
        }
    }
    if (toggle != 1)
    {
        return false;
    }
    return true;
}
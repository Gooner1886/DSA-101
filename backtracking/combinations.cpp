// Leetcode - 77 - Combinations
void backtrack(vector<vector<int>> &result, vector<int> &each, int n, int k, int index)
{
    if (each.size() == k)
    {
        result.push_back(each);
        return;
    }

    for (int i = index; i <= n; i++)
    {
        each.push_back(i);
        backtrack(result, each, n, k, i + 1);
        each.pop_back();
    }
}

vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> result;
    vector<int> each;
    backtrack(result, each, n, k, 1);
    return result;
}
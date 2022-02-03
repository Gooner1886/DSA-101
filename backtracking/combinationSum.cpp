// Leetcode - 39 - Combination Sum
void backtrack(vector<vector<int>> &result, vector<int> &each, int idx, vector<int> &candidates, int target, int n)
{
    if (idx == n)
    {
        if (target == 0)
        {
            result.push_back(each);
        }
        return;
    }

    if (candidates[idx] <= target)
    {
        each.push_back(candidates[idx]);
        backtrack(result, each, idx, candidates, (target - candidates[idx]), n);
        each.pop_back();
    }

    backtrack(result, each, idx + 1, candidates, target, n);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    int n = candidates.size();
    vector<vector<int>> result;
    vector<int> each;
    backtrack(result, each, 0, candidates, target, n);
    return result;
}
// Leetcode - 923 - 3Sum with Multiplicity
int threeSumMulti(vector<int> &arr, int target)
{
    int mod = 1e9 + 7;
    int res = 0;

    unordered_map<int, int> um;

    for (int i = 0; i < arr.size(); i++)
    {
        res = (res + um[target - arr[i]]) % mod;

        for (int j = 0; j < i; j++)
        {
            um[arr[i] + arr[j]]++;
        }
    }
    return res;
}
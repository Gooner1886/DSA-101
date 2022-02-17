// Leetcode - 942 - DI String Match
vector<int> diStringMatch(string s)
{
    int n = s.size();
    vector<int> arr(n + 1);
    int j = 0;
    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            arr[j] = k;
            j++;
            k++;
        }
        else
        {
            arr[j] = n;
            n--;
            j++;
        }
    }
    arr[j] = k;
    return arr;
}
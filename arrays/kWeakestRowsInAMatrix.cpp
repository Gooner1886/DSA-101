// Leetcode - 1337 - K Weakest Rows in a matrix
vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    map<int, int> rowfreq;

    vector<int> answer;
    for (int i = 0; i < mat.size(); i++)
    {
        rowfreq[i] = 0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                rowfreq[i]++;
            }
        }
    }

    // for(auto itr : rowfreq) {
    //     cout << itr.first << itr.second << endl;
    // }

    int n = rowfreq.size();
    while (rowfreq.size() != (n - k))
    {
        int minOnes = INT_MAX;
        int rowval;
        for (auto it : rowfreq)
        {
            if (it.second < minOnes)
            {
                minOnes = it.second;
                rowval = it.first;
            }
        }
        answer.push_back(rowval);
        rowfreq.erase(rowval);
    }
    return answer;
}
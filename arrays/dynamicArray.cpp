// Dynamic Array - Hackerrank

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector < vector<int> > arr(n);
    int last =0;
    int len = queries.size();
    vector <int> ans;
    for(int i=0; i<len; i++)
    {   int idx = (last ^ queries[i][1])%n;
        if(queries[i][0]==1)
        {
        arr[idx].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2)
        {
        int ind = queries[i][2]%(arr[idx].size());
        last = arr[idx][ind];
        ans.push_back(last);
        }
    }
return ans;
}
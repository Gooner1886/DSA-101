// Leetcode - 1584 - Minimum Cost to Connect All Points
int minCostConnectPoints(vector<vector<int>> &points)
{
    int n = points.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

    vector<bool> inMST(n);

    minHeap.push({0, 0});
    int mstCost = 0;
    int edgesUsed = 0;

    while (edgesUsed < n)
    {
        pair<int, int> topElement = minHeap.top();
        minHeap.pop();

        int weight = topElement.first;
        int currNode = topElement.second;

        if (inMST[currNode])
        {
            continue;
        }

        inMST[currNode] = true;
        mstCost += weight;
        edgesUsed++;

        for (int nextNode = 0; nextNode < n; nextNode++)
        {
            if (!inMST[nextNode])
            {
                int nextWeight = abs(points[currNode][0] - points[nextNode][0]) + abs(points[currNode][1] - points[nextNode][1]);

                minHeap.push({nextWeight, nextNode});
            }
        }
    }
    return mstCost;
}
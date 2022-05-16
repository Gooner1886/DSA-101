// Leetcode - 1091 - Shortest Path in Binary Matrix
int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();

    queue<pair<int, int>> q;
    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
        return -1;
    if (n == 1)
        return 1;

    int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

    int dist = 0;

    q.push({0, 0});

    grid[0][0] = 1;

    while (!q.empty())
    {
        int size = q.size();
        dist++;
        while (size--)
        {
            auto front = q.front();
            q.pop();
            for (auto d : dir)
            {
                int adI = front.first + d[0];
                int adJ = front.second + d[1];

                if (adI < 0 || adJ < 0 || adI >= n || adJ >= n)
                    continue;

                if (grid[adI][adJ] == 1)
                    continue;

                grid[adI][adJ] = 1;

                if (adI == n - 1 && adJ == n - 1)
                    return dist + 1;
                q.push({adI, adJ});
            }
        }
    }
    return -1;
}
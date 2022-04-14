// Leetcode - 289 - Game of Life
int m = board.size();
int n = board[0].size();
vector<vector<int>> lookUp(m, vector<int>(n, 0));

for (int x = 0; x < m; x++)
{

    for (int y = 0; y < n; y++)
    {
        int count = 0;

        if (x + 1 < m && y < n && board[x + 1][y] == 1)
            count++;

        if (x - 1 >= 0 && y < n && board[x - 1][y] == 1)
            count++;

        if (y + 1 < n && x < m && board[x][y + 1] == 1)
            count++;

        if (y - 1 >= 0 && x < m && board[x][y - 1] == 1)
            count++;

        if (x - 1 >= 0 && y + 1 < n && board[x - 1][y + 1] == 1)
            count++;

        if (x - 1 >= 0 && y - 1 >= 0 && board[x - 1][y - 1] == 1)
            count++;

        if (x + 1 < m && y - 1 >= 0 && board[x + 1][y - 1] == 1)
            count++;

        if (x + 1 < m && y + 1 < n && board[x + 1][y + 1] == 1)
            count++;

        if (count == 3)
            lookUp[x][y] = 1;
        if (board[x][y] == 1 && (count == 2 || count == 3))
            lookUp[x][y] = 1;
    }
}

board = lookUp;
}
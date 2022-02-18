// Leetcode - 130 - Surrounded Regions
int m, n;

void dfs(vector<vector<char>> &board, int i, int j)
{
    if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != 'O')
    {
        return;
    }

    board[i][j] = '*';

    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
}

void solve(vector<vector<char>> &board)
{
    m = board.size();
    n = board[0].size();

    for (int i = 0; i < m; i++)
    {
        dfs(board, i, 0);
        dfs(board, i, n - 1);
    }

    for (int j = 0; j < n; j++)
    {
        dfs(board, 0, j);
        dfs(board, m - 1, j);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = board[i][j] == '*' ? 'O' : 'X';
        }
    }
}
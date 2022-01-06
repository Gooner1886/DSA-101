// Leetcode - Battleships on a board

void dfs(vector<vector<char>> &board, int i, int j)
{
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] == '.')
    {
        return;
    }

    board[i][j] = '.';
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
}

int countBattleships(vector<vector<char>> &board)
{
    int battleships = 0;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 'X')
            {
                dfs(board, i, j);
                battleships++;
            }
        }
    }
    return battleships;
}
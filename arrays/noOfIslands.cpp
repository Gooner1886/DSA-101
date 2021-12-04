// Number of Islands - Leetcode

void mark_island(vector<vector<char>>& matrix, int x, int y, int r, int c) {
        if(x < 0 || x >= r || y < 0 || y >= c || (matrix[x][y] != '1')) return;
        
        matrix[x][y] = '2';
        
        mark_island(matrix, x, y+1, r, c);
        mark_island(matrix, x+1, y, r, c);
        mark_island(matrix, x, y-1, r, c);
        mark_island(matrix, x-1, y, r, c);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        if(row == 0) return 0;
        int col = grid[0].size();
        int no_of_islands = 0;
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == '1') {
                    mark_island(grid, i, j, row, col);
                    no_of_islands++;
                }
            }
        }
        return no_of_islands;
    }
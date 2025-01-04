class Solution {

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int row[9][9] ;
        int col[9][9] ;
        int grid[9][9] ;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                if(board[i][j]!='.'){

                    int n = board[i][j] - '0';

                    int k = i/3 *3 +j/3;

                    if(row[i][n-1]++ || col[j][n-1]++ || grid[k][n-1]++){
                        return false;
                    }
                }
            }
            
        }
        return true;
    }
};
class Solution {
    vector<vector<int>> row,col,box;
    bool isValid(vector<vector<char>>& board,int i,int j,int c) {
        if(row[i][c]==1 || col[j][c]==1 || box[3*(i/3)+(j/3)][c]==1) return false;
        return true;
    }

    bool help(vector<vector<char>>& board){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    for (char num = '1'; num <= '9'; num++){
                        int c = num - '1';
                        if (isValid(board, i, j, c)){
                            board[i][j]=num;
                            row[i][c]=1;
                            col[j][c]=1;
                            box[3*(i/3)+(j/3)][c]=1;

                            if(help(board)) return true;
                            board[i][j]='.';
                            row[i][c]=0;
                            col[j][c]=0;
                            box[3*(i/3)+(j/3)][c]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        row.resize(9, vector<int>(9, 0));
        col.resize(9, vector<int>(9, 0));
        box.resize(9, vector<int>(9, 0));

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int num=(board[i][j]-'1');
                row[i][num]=1;
                col[j][num]=1;
                box[3*(i/3)+(j/3)][num]=1;
            }
        }
        help(board);
    }
};
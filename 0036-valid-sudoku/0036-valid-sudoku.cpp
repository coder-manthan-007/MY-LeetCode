class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //rows
        for(int i = 0;i<9;i++){
            vector<int>arr(10);
            for(int j = 0;j<9;j++){
                if(board[i][j]-'0'>0 && board[i][j]-'0'<10){
                    if(arr[board[i][j]-'0'] !=0)return 0;
                    else{
                        arr[board[i][j]-'0']++;
                    }
                }
            }
        }
        //columns
        for(int j = 0;j<9;j++){
            vector<int>arr(10);
            for(int i = 0;i<9;i++){
                if(board[i][j]-'0'>0 && board[i][j]-'0'<10){
                    if(arr[board[i][j]-'0'] !=0)return 0;
                    else{
                        arr[board[i][j]-'0']++;
                    }
                }
            }
        }
        //grids:
       // Validate 3x3 Grids using 3x3 block jumps
        for (int row = 0; row < 9; row += 3) {
             for (int col = 0; col < 9; col += 3) {
                 vector<int> arr(10, 0); // Reset frequency array for EACH 3x3 sub-box
        
        for (int r = row; r < row + 3; r++) {
            for (int c = col; c < col + 3; c++) {
                if (board[r][c] != '.') {
                    int val = board[r][c] - '0';
                    if (arr[val] > 0) return false;
                    arr[val]++;
                }
            }
        }
    }
}
        
        


       return 1;

        
    }
};
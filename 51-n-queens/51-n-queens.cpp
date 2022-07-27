class Solution {
public:
    bool isSafe(int row, int col, vector<string> &board, int size){
        int duprow = row;
        int dupcol = col;
        
        while(row>=0 and col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        
        col = dupcol;
        row = duprow;
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        col = dupcol;
        row = duprow;
        while(row<size and col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        
        
        return true;
        
    }
    
    void solve(int col,vector<vector<string>> &ans , vector<string> &board, int size){
        if(col == size){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<size;row++){
            if(isSafe(row,col,board,size)){
                board[row][col] ='Q';
                solve(col+1,ans,board,size);
                board[row][col] = '.';
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        solve(0,ans, board,n);
        return ans;
    }
};
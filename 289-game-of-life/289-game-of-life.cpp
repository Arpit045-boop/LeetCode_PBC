class Solution {
public:
    
    void gameOfLife(vector<vector<int>>& board) {
        int m= board.size();
        int n= board[0].size();
        vector<vector<int>> v(m,vector<int> (n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count=0;
                if(board[i][j]==0){
                    if(i+1<m){
                        if(board[i+1][j]==1){
                            count++;
                        }
                    }
                    if(i-1>=0){
                        if(board[i-1][j]==1){
                            count++;
                        }
                    }
                    if(j+1<n){
                        if(board[i][j+1]==1){
                            count++;
                        }
                    }
                    if(j-1>=0){
                        if(board[i][j-1]==1){
                            count++;
                        }
                    }
                    if(i+1<m and j+1<n){
                        if(board[i+1][j+1]==1){
                            count++;
                        }
                    }
                    if(i-1>=0 and j-1>=0 ){
                        if(board[i-1][j-1]==1){
                            count++;
                        }
                    }
                    if(i-1>=0 and j+1 <n){
                        if(board[i-1][j+1]==1){
                            count++;
                        }
                    }
                    if(i+1<m and j-1>=0){
                        if(board[i+1][j-1]==1){
                            count++;
                        }
                    }
                    if(count==3){
                        v[i][j]=1;
                    }
                    if(count!=3){
                        v[i][j]=0;
                    }
                }
                else{
                    if(i+1<m){
                        if(board[i+1][j]==1){
                            count++;
                        }
                    }
                    if(i-1>=0){
                        if(board[i-1][j]==1){
                            count++;
                        }
                    }
                    if(j+1<n){
                        if(board[i][j+1]==1){
                            count++;
                        }
                    }
                    if(j-1>=0){
                        if(board[i][j-1]==1){
                            count++;
                        }
                    }
                    if(i+1<m and j+1<n){
                        if(board[i+1][j+1]==1){
                            count++;
                        }
                    }
                    if(i-1>=0 and j-1>=0 ){
                        if(board[i-1][j-1]==1){
                            count++;
                        }
                    }
                    if(i-1>=0 and j+1 <n){
                        if(board[i-1][j+1]==1){
                            count++;
                        }
                    }
                    if(i+1<m and j-1>=0){
                        if(board[i+1][j-1]==1){
                            count++;
                        }
                    }
                    if(count<2){
                        v[i][j]=0;
                    }
                    if(count==3 || count==2){
                        v[i][j]=1;
                    }
                    if(count>3){
                        v[i][j]=0;
                    }
                }
            }
        }
        board=v;
    }
};
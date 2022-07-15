class Solution {
public:
    void func(vector<vector<int>> & grid, int i, int j, int row, int col,int &count,vector<vector<bool>> &visited){
        if(i>=row || j>=col || i<0 || j<0 || visited[i][j] == true || grid[i][j]==0){
            return ; 
        }
        visited[i][j] = true;
        count++;
        func(grid, i+1, j, row, col,count, visited);
        func(grid, i-1, j, row, col,count, visited);
        func(grid, i, j+1, row, col,count, visited);
        func(grid, i, j-1, row, col,count, visited);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        int maxi = 0 ;
        vector<vector<bool>> visited(row, vector<bool> (col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1){
                    if(visited[i][j] == false){
                        func(grid, i, j, row, col,count,visited);
                        maxi = max(maxi, count);
                        count = 0;
                    }    
                }
                
            }
        }
        return maxi;
    }
};
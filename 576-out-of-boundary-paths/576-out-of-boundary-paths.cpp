class Solution {
public:
    int dp[60][60][60];
    int mod = pow(10,9) + 7;
    int func(int m, int n, int maxMove,int x, int y, int move){
        if(x<0 || y<0 || x>=m || y>=n){
            return 1;
        }
        if(maxMove == move){
            return 0;
        }
        if(dp[x][y][move] != -1){
            return dp[x][y][move];
        }
        
        int tempVal = 0;
        
        tempVal = (tempVal + func(m,n,maxMove,x-1,y,move+1)) % mod;
        tempVal = (tempVal + func(m,n,maxMove,x,y-1,move+1)) % mod;
        tempVal = (tempVal + func(m,n,maxMove,x+1,y,move+1)) % mod;
        tempVal = (tempVal + func(m,n,maxMove,x,y+1,move+1)) % mod;
        dp[x][y][move] = tempVal;
        
        return dp[x][y][move] % mod;
        
    }
    
    int findPaths(int m, int n, int maxMove, int x, int y) {
        memset(dp,-1,sizeof(dp));
        return func(m,n,maxMove,x,y,0);
        
    }
};
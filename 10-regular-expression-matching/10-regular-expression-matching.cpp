class Solution {
public:
    bool isMatch(string A, string B) {
        int col = A.size();
    int row= B.size();
    int dp[row+1][col+1];
    memset(dp,-1,sizeof(dp));
    dp[0][0] = 1;
    for(int j=1;j<=col;j++){
        dp[0][j] = 0;
    }
    for(int i=1;i<=row;i++){
        if(B[i-1] != '*'){
            dp[i][0] = 0;   
        }
        else{
            dp[i][0]=dp[i-2][0];
        }
    }

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(B[i-1]=='*'){
                dp[i][j]=dp[i-2][j];
                if((A[j-1]==B[i-2] )|| (B[i-2]=='.')){
                    dp[i][j] = dp[i][j] || dp[i][j-1];
                }
            }
            else if((A[j-1] == B[i-1]) || (B[i-1]=='.')){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
            
        }
    }
    return dp[row][col];

    }
};
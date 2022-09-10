class Solution {
public:
    int func(vector<string> &strs,int m, int n, int index,vector<vector<int>> &dp){
        for(int i=0;i<strs.size();i++){
            int count1=0;
            int count0=0;
            for(char c:strs[i]){
                if(c=='1'){
                    count1++;
                }
                else{
                    count0++;
                }
            }
            
            for(int i=m;i>=count0;i--){
                for(int j=n;j>=count1;j--){
                    dp[i][j] = max(dp[i][j] , dp[i-count0][j-count1] + 1);
                }
            }
            
        }
        return dp[m][n];
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        return func(strs,m,n,0,dp);
    }
};
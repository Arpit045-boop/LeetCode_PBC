class Solution {
public:
    int func(int ind, int preInd, vector<int> &nums, int n, vector<vector<int>> &dp){
        if(ind==n){
            return 0;
        }
        if(dp[ind][preInd+1] != -1){
            return dp[ind][preInd+1];
        }
        int len = func(ind+1,preInd,nums,n,dp);
        if(preInd == -1 || nums[ind] > nums[preInd]){
            len=max(len,1+func(ind+1,ind,nums,n,dp));
        }
        
        return dp[ind][preInd+1]=len;
        
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
       int size=nums.size();
        vector<vector<int>> dp(size,vector<int> (size+1,-1));
        return func(0,-1,nums,size,dp);
    }
};
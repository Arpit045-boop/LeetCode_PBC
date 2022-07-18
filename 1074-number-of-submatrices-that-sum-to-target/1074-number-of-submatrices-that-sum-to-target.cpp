class Solution {
public:
    int result=0;
    unordered_map<int,int >mp;
    
    void getresult(vector<int> &row,int target){
        int sum = 0;
        mp.clear();
        mp[0]++;
        // cout<<mp[0]<<endl;
        for(int num : row){
            sum+=num;
            result+=mp[sum-target];
            mp[sum]++;
        }
        
    }
    
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        vector<int> row(matrix[0].size());
        
        for(int i=0;i<matrix.size();i++){
            fill(row.begin(),row.end(),0);
            for(int j=i;j<matrix.size();j++){
                for(int x=0;x<matrix[0].size();x++){
                    row[x]+=matrix[j][x];
                }
                getresult(row,target);
                // cout<<result<<endl;
            }
        }
        return result;
    }
};
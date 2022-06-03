class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> arr=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix[0].size();k++){
                        arr[i][k]=0;
                    }
                    for(int k=0;k<matrix.size();k++){
                        arr[k][j]=0;
                    }
                    
                }
            }
        }
        matrix=arr;
    }
};
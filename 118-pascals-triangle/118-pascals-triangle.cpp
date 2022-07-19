class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp_v;
        vector<int> v1(1,1);
        temp_v.push_back(v1);
        if(numRows==1){
            return temp_v;
        }
        vector<int> v2(2,1);
        temp_v.push_back(v2);
        if(numRows==2){
            return temp_v;
        }
        for(int i=2;i<numRows;i++){
            vector<int> v;
            v.push_back(1);
            for(int j=0;j<temp_v[i-1].size()-1;j++){
               v.push_back(temp_v[i-1][j] + temp_v[i-1][j+1]);
            }
            v.push_back(1);
            temp_v.push_back(v);    
        }
        
        return temp_v;
        
    }
};
class Solution {
public:
    void func(vector<int>& v,int start, int t, int size,vector<vector<int>>& result, vector<int> &temp ){
        if(start == size){
            if(t == 0){
                result.push_back(temp);
                return ;
            }
            else{
                return ;
            }
        }
        
        if(t >= v[start]) {
            temp.push_back(v[start]);
            func(v,start,t-v[start],size,result,temp);
            temp.pop_back();
        }
        func(v,start+1,t,size,result,temp);
    }
    
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        int size = v.size();
        vector<vector<int>> result;
        vector<int> temp;
        func(v,0,t,size,result,temp);
        return result;
    }
};
class Solution {
public:
    void func(vector<int> &v,vector<vector<int>>& result, int target, int start,int size, vector<int>& temp){
        if(target == 0){
            result.push_back(temp);
            return ;
        }
        else{
            for(int i=start; i<v.size(); i++){
                if(v[i] > target) break;
                if(i>start && v[i]==v[i-1]) continue; 
                temp.push_back(v[i]);
                // cout<<v[i]<<" ";
                func(v, result, target-v[i], i+1, size, temp );
                temp.pop_back();
                // cout<<endl;
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        int size = v.size();
        vector<vector<int>> result;
        vector<int> temp;
        sort(v.begin(),v.end());
        
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        func(v,result,target,0,size,temp);
        return result;
    }
};
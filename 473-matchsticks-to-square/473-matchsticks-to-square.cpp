class Solution {
public:
    bool func(int k , vector<int> & v, vector<int> &visited, int i, int cur_sum , int target){
        if(k==1){
            return true;
        }
        if(cur_sum == target){
            return func(k-1, v,visited, 0,0,target);
        }
        
        for(int j=i;j<v.size();j++){
            if(visited[j] || cur_sum + v[j] > target) continue;
            
            visited[j] = true;
            if(func(k,v,visited,j+1,cur_sum+v[j] , target)) return true;
            visited[j]=false;
        }
        return false;
        
    }
    
    bool makesquare(vector<int>& matchsticks) {
        int size = matchsticks.size();
        vector<int> visited (size, false);
        int sum = 0;
        for(int i=0;i<size;i++){
            sum += matchsticks[i];
        }
        if(size<4 || sum % 4) return false;
        return func(4,matchsticks,visited,0,0,sum/4);
    }
};
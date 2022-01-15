class Solution {
public:
    int minJumps(vector<int>& arr) {
        if(arr.size()==1){
            return 0;
        }
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        int n=arr.size();
        // vector<int> adj[n+1];
        queue<int> q;
        vector<bool> visited(n);
        q.push(0);
        visited[0]=true;
        // int ans;
        // int flag=0;
        int count=0;
        while(!q.empty()){
            for(int i=q.size();i>0;i--){
                int node=q.front();
                q.pop();
                if(node==n-1){
                    return count;
                }
                vector<int> &next=mp[arr[node]];
                next.push_back(node+1);
                next.push_back(node-1);
                for(auto it:next){
                    if(it<n and it>=0 and !visited[it]){
                        visited[it]=true;
                        q.push(it);
                    }
                }
                next.clear();
            }
            count++;
        }
        return 0;
    }
};
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> from_mp;
        map<int,int> to_mp;
        
        for(auto trip:trips){
            from_mp[trip[1]]+=trip[0];
            to_mp[trip[2]]+=trip[0];
        }
        int passengers=0;
        for(int i=0;i<=1000;i++){
            if(from_mp.find(i)!=from_mp.end()){
                passengers+=from_mp[i];
            }
            if(to_mp.find(i)!=to_mp.end()){
                passengers-=to_mp[i];
            }
            if(passengers>capacity){
                return false;
            }
        }
        return true;
    }
};
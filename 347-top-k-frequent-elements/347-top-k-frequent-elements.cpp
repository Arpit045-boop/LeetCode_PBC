class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:mp){
            pq.push(make_pair(it.second,it.first));
        }
        vector<int> res;
        while(k!=0){
            auto p = pq.top();
            pq.pop();
            res.push_back(p.second);
            k--;
        }
        return res;
    }
};
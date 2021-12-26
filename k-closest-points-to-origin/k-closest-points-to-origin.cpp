class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>, vector<pair<double,vector<int>>>, greater<pair<double,vector<int>>>> pq;
        
        for(auto point:points){
            double dist = sqrt(pow(point[0],2)+pow(point[1],2));
            pq.push({dist,point});
        }
        
        vector<vector<int>> res;
        while(k>0){
            auto  p = pq.top();
            pq.pop();
            res.push_back(p.second);
            k--;
        }
        return res;
    }
};
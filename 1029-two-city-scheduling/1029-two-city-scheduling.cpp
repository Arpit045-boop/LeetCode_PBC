class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> refund;
        int n=costs.size()/2;
        int minCost=0;
        for(auto arr:costs){
            minCost+=arr[0];
            refund.push_back(arr[1]-arr[0]);
        }
        sort(refund.begin(),refund.end());
        for(int i=0;i<n;i++){
            minCost+=refund[i];
        }
        return minCost;
    }
};
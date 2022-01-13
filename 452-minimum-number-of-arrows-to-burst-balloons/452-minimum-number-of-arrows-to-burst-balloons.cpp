class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int size=points.size();
        int minEnd=INT_MAX;
        int count=0;
        for(auto point:points){
            if(point[0]>minEnd){
                count++;
                minEnd=point[1];
            }
            else{
                minEnd=min(minEnd,point[1]);
            }
        }
        return count+!points.empty();
        
    }
};
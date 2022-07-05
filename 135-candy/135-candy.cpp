class Solution {
public:
    int candy(vector<int>& ratings) {
        int children = ratings.size();
        vector<int> candies(children,1);
        
        for(int i=1;i<children;i++){
            if(ratings[i-1] < ratings[i]){
                candies[i] = candies[i-1]+1;
            }
        }
        
        for(int i=children-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                candies[i] = max(candies[i],candies[i+1]+1);
            }
        }
        int sum=0;
        for(int i=0;i<candies.size();i++){
            sum+=candies[i];
        }
        return sum;
    }
};
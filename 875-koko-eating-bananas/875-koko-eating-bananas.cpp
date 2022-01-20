class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int k=0;
        int high=1000000000;
        while(low<=high){
            k=(low+high)/2;
            
            int hour=0;
            for(int i=0;i<piles.size();i++){
                hour+=ceil(1.0*piles[i]/k);
            }
            if(hour<=h){
                high=k-1;
            }
            else{
                low=k+1;
            }
        }
        return low;
    }
};
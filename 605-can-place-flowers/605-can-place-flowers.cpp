class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int zero=1;
        int ans=0;
        for(int f:flowerbed){
            if(f==0){
                zero++;
            }
            else{
                ans+=(zero-1)/2;
                zero=0;
            }
        }
        return (ans + zero/2)>=n;
    }
};
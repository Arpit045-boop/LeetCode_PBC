class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=INT_MIN;
        int curpro=1;
        for(int i=0;i<nums.size();i++){
            curpro = curpro*nums[i];
            maxpro = max(maxpro,curpro);
            if(curpro==0){
                curpro = 1;
            }
        }
        curpro=1;
        for(int i=nums.size()-1; i >=0;i--){
            curpro = curpro*nums[i];
            maxpro = max(maxpro,curpro);
            if(curpro==0){
                curpro = 1;
            }
        }
        return maxpro;
    }
};
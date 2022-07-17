class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> result;
        for(int num=0; num<=(1<<size)-1;num++){
            vector<int> temp;
            for(int i=0;i<size;i++){
                if(num&(1<<i)){
                    temp.push_back(nums[i]);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
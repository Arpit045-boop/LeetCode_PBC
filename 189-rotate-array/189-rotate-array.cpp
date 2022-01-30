class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        vector<int> res(size);
        for(int i=0;i<size;i++){
            res[(i+k)%size]=nums[i];
        }
        nums=res;
    }
};
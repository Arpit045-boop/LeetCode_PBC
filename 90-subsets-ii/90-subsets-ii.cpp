class Solution {
public:
    void func(vector<int> &nums, int i, vector<int> &temp, set<vector<int>> &s, int size){
        if(i==size){
            s.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        func(nums,i+1,temp,s,size);
        temp.pop_back();
        func(nums,i+1,temp,s,size);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> result;
        vector<int> temp;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        func(nums,0,temp,s,size);
        for(auto i:s){
            result.push_back(i);
        }
        return result;
    }
};
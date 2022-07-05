class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int temp_count=1;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]+1) == nums[i+1]){
                temp_count++;
                // cout<<temp_count<<endl;
            }
            else{
                count=max(count,temp_count);
                if(nums[i] != nums[i+1]) temp_count=1;
            }
        }
        count=max(count,temp_count);
        return count;
    }
};
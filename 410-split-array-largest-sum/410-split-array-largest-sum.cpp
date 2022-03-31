class Solution {
public:
    bool isPossible(vector<int>&nums,int mid,int m){
        int sa=1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;){
            sum=sum+nums[i];
            if(sum>mid){
                sa++;
                sum=0;
            }
            else{
                i++;
            }
        }
        if(sa>m){
            return false;
        }
        
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int lo=*max_element(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size();
        for(int i:nums){
            sum=sum+i;
        }
        int hi=sum;
        if(n==m){
            return lo;
        }
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(isPossible(nums,mid,m)==true){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
class NumArray {
public:
    int n;
    vector<int> seg;
    
    int build(const vector<int> &nums, int left, int right, int node){
        int middle;
        int leftSum,rightSum;
        if(left==right){
            return seg[node] = nums[left];
        }
        middle=(left+right)/2;
        leftSum = build(nums,left,middle,2*node+1);
        rightSum = build(nums,middle+1,right,2*node+2);
        return seg[node] = leftSum + rightSum;
    }
    
    int sumRangeFunc(int left, int right, int ss, int se, int node){
        int leftSum, rightSum;
        int middle;
        
        if(right<ss || left>se){
            return 0;
        }
        if(left<=ss && right>=se){
            return seg[node];
        }
        middle=(ss+se)/2;
        leftSum = sumRangeFunc(left,right,ss,middle,2*node+1);
        rightSum = sumRangeFunc(left,right,middle+1,se,2*node+2);
        
        return leftSum + rightSum;
        
    }
    
    int updateFunc(int index, int newVal, int ss, int se, int node){
        int leftSum,rightSum;
        int middle;
        if(index<ss || index>se){
            return seg[node];
        }
        
        if(ss == se){
            return seg[node] = newVal;
        }
        
        middle=(ss+se)/2;
        leftSum = updateFunc(index,newVal,ss,middle,2*node+1);
        // cout<<"Leftsum "<<leftSum<<endl;
        rightSum = updateFunc(index,newVal,middle+1,se,2*node+2);
        return seg[node] = leftSum+rightSum;
    }
    
    NumArray(vector<int>& nums) {
        n=nums.size();
        seg.resize(4*n);
        build(nums,0,n-1,0);
    }
    
    void update(int index, int val) {
        updateFunc(index,val,0,n-1,0);
    }
    
    int sumRange(int left, int right) {
        return sumRangeFunc(left,right,0,n-1,0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
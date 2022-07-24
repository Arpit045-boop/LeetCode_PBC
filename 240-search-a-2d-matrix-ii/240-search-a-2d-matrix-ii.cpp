class Solution {
public:
//     bool search(vector<int> v,int target){
//         int n = v.size();
//         int low=0 , high=n-1;
        
//         while(low<=high){
//             int mid = low+(high-low)/2;
//             if(v[mid] < target){
//                 low = mid+1;
//             }
//             else if(v[mid] > target){
//                 high = mid-1;
//             }
//             else{
//                 return true;
//             }
            
//         }
        
//         return false;
//     }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v: matrix){
            if(binary_search(v.begin(),v.end(),target)){
                return true;
            }
        }
        return false;
    }
};
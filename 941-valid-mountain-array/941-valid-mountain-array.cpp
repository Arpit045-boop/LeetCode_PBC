class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size=arr.size();
        if(size<3){
            return false;
        }
        int flag=1;
        int hop=0;
        for(int i=0;i<size-1;i++){
            if(arr[i] > arr[i+1]){
                flag=0;
            }
            else if(arr[i]==arr[i+1]){
                return false;
            }
            else{
                hop=1;
                if(flag==0){
                    return false;
                }
                flag=1;
            }
        }
        if(flag==1 || hop==0){
            return false;
        }
        return true;
    }
};
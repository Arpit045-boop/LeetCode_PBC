class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int i=1;
        vector<int> res;
        while(i<=9){
            int sum=i;
            int j=sum;
            while(j<9){
                if(sum>=low and sum<=high){
                    res.push_back(sum);
                }
                else if(sum>high){
                    break;
                }
                j=sum%10;
                sum=sum*10+(1+j);
                
            }
            i++;
        }
        sort(res.begin(),res.end());
        return res;
    }
};
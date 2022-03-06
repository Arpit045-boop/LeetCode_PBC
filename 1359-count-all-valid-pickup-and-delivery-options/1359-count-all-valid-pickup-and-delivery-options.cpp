class Solution {
public:
    int countOrders(int n) {
        int result =1;
        long long m=1000000007;
        for(int i=1;i<=n;i++){
            result = (((result)%m) * i * (2*i-1))%m;
        }
        return result;
    }
};
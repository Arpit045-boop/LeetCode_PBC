class Solution {
public:
    int bitwiseComplement(int n) {
        int temp=1;
        while(n>temp){
            temp=temp*2+1;
        }
        return temp-n;
    }
};
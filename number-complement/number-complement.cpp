class Solution {
public:
    int findComplement(int num) {
        vector<int> v;
        while(num!=1){
            v.push_back(num%2);
            num=num/2;
        }
        v.push_back(num);
        // reverse(v.begin(),v.end());
    
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                v[i]=0;
            }
            else{
                v[i]=1;
            }
        }
        int res=0;
        for(int i=0;i<v.size();i++){
            res=res+(v[i]*pow(2,i));
        }
        return res;
    }
};
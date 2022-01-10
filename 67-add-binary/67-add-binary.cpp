class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i=a.size()-1,j=b.size()-1,c=0;
        while(i>=0 || j>=0 ||c==1){
            if(i>=0){
                c=c+(a[i]-'0');
                i--;
            }
            if(j>=0){
                c=c+(b[j]-'0');
                j--;
            }
            s=char(c%2+'0')+s;
            c=c/2;
        }
        return s;
        
    }
};
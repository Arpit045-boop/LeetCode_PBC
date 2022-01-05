class Solution {
public:
    bool isPalindrom(string & s,int l,int r){
        while(l<r){
            if(s[l++]!=s[r--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s,int start,vector<vector<string>> &res, vector<string> &temp){
        int n=s.size();
        if(n==start){
            res.push_back(temp);
        }
        else{
            for(int i=start;i<n;i++){
                if(isPalindrom(s,start,i)){
                    temp.push_back(s.substr(start,i-start+1));
                    solve(s,i+1,res,temp);
                    temp.pop_back();
                }
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        solve(s,0,res,temp);
        return res;
    }
};
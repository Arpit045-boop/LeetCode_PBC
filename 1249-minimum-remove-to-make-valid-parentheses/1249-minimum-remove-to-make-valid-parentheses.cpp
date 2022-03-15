class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        vector<char> v(s.size(),0);
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                v[i]=s[i];
            }
            else if(s[i]=='('){
                st.push(make_pair(s[i],i));
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    auto p = st.top();
                    // cout<<p.first<<" "<<p.second<<endl;
                    st.pop();
                    v[p.second] = p.first;
                    v[i] = s[i];
                }
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                res+=v[i];
            }
        }
        return res;
    }
};
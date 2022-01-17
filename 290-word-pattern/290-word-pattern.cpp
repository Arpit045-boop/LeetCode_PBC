class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(temp);
                temp.clear();
            }
            else{
                temp.push_back(s[i]);    
            }
            
        }
        v.push_back(temp);
        // cout<<v.size()<<" "<<pattern.size()<<endl;
        if(v.size()!=pattern.size()){
            return false;
        }
        set<string> s1;
        set<char> s2;
        for(string i:v){
            s1.insert(i);
        }
        for(char i:pattern){
            s2.insert(i);
        }
        if(s1.size()!=s2.size()){
            return false;
        }
        
        unordered_map<char,set<string>> mp;
        for(int i=0;i<pattern.size();i++){
            
            mp[pattern[i]].insert(v[i]);
        }
        
        for(int i=0;i<pattern.size();i++){
         
            if(mp[pattern[i]].size()!=1){
                return false;
            }
        }
        return true;
        
        
    }
};
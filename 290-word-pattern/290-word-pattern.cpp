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
        if(v.size()!=pattern.size()){
            return false;
        }
        map<char,string> charStr;
        map<string,char> strChar;
        for(int i=0;i<v.size();i++){
            if(charStr.count(pattern[i])==0 and strChar.count(v[i])==0){
                charStr[pattern[i]]=v[i];
                strChar[v[i]]=pattern[i];
            }
            if(v[i]!=charStr[pattern[i]]){
                return false;
            }
        }
        return true;
        
        
        
    }
};
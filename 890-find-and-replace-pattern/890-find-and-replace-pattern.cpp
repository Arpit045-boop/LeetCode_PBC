class Solution {
public:
    bool match(string pattern, string temp){
        map<char,int > mp;
        int count=1;
        string s="";
        vector<string> result;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])!=mp.end()){
                s.push_back('0' + mp[pattern[i]] );
            }
            else{
                mp[pattern[i]] = count;
                s.push_back('0' + mp[pattern[i]]);
                count++;
            }
        }
        if(temp == s){
            return true;
        }
        return false;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        map<char,int > mp;
        int count=1;
        string s="";
        vector<string> result;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])!=mp.end()){
                s.push_back('0' + mp[pattern[i]] );
            }
            else{
                mp[pattern[i]] = count;
                s.push_back('0' + mp[pattern[i]]);
                count++;
            }
        }
        // cout<<s<<endl;
        for(auto word:words){
            if(match(word,s)){
                result.push_back(word);
            }
        }
        return result;
    }
};
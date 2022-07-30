class Solution {
public:
    vector<int> counter(string s){
        vector<int> count(26);
        for(char c:s){
            count[c-'a']++;
        }
        return count;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> temp(26);
        vector<int> count(26);
        
        for(int i=0;i<words2.size();i++){
            temp = counter(words2[i]);
            for(int i=0;i<26;i++){
                count[i] = max(count[i],temp[i]);
            }
        }
        
        vector<string> result;
        for(string word: words1){
            temp = counter(word);
            int i;
            for(i=0;i<26;i++){
                if(temp[i] < count[i]){
                    break;
                }
            }
            if(i==26){
                result.push_back(word);
            }
        }
        return result;
    }
};
class Solution {
public:
    int minDominoRotations(vector<int>& v1, vector<int>& v2) {
        unordered_map<int,int> mp_top;
        unordered_map<int,int> mp_bottom;
        int n1=v1.size();
        int n2=v2.size();
        for(int i=0;i<n1;i++){
            mp_top[v1[i]]++;
        }
        for(int i=0;i<n2;i++){
            mp_bottom[v2[i]]++;
        }
        int i=0;
        int j=0;
        unordered_map<int,int> same;
        while(i<n1 and j<n2){
            if(v1[i]==v2[j]){
                same[v1[i]]++;
            }
            i++;
            j++;
        }
        // int ans=0;
        for(int i=0;i<n1;i++){
            if((mp_top[v1[i]] + mp_bottom[v1[i]] - same[v1[i]]) == n1){
                return n1-(max(mp_top[v1[i]] , mp_bottom[v1[i]] ) ) ; 
            }
        }
        return -1;
    }
};
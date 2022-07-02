class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        vector<int> vc_temp;
        vector<int> hc_temp;
        int res;
        long long int m=1000000007;
        sort(hc.begin(),hc.end()); 
        for(int i=0;i<hc.size()-1;i++){
            hc_temp.push_back(hc[i+1]-hc[i]);
        }
        hc_temp.push_back(hc[0]);
        hc_temp.push_back(abs(hc[hc.size()-1]-h));
        sort(hc_temp.begin(),hc_temp.end());
        
        sort(vc.begin(),vc.end()); 
        for(int i=0;i<vc.size()-1;i++){
            vc_temp.push_back(vc[i+1]-vc[i]);
        }
        vc_temp.push_back(vc[0]);
        vc_temp.push_back(w-vc[vc.size()-1]);
        sort(vc_temp.begin(),vc_temp.end());
        res=(vc_temp[vc_temp.size()-1])%m *(hc_temp[hc_temp.size()-1])%m;
        return res%m;
    }
};
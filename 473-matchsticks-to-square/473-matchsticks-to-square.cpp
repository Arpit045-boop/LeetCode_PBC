class Solution {
public:
    int a,b,c,d;
    bool func(vector<int> &v, int i){
        if(i==v.size()){
            if(a==0 && b==0 && c==0 && d==0){
                return true;
            }
            
            else{
                return false;
            }
        }
        
        if(v[i] <= a){
            a -= v[i];
            if(func(v,i+1)) return true;
            a += v[i];
        }
        if(v[i] <=b){
            b -= v[i];
            if(func(v,i+1)) return true;
            b += v[i];
        }
        if(v[i] <= c){
            c -= v[i];
            if(func(v,i+1)) return true;
            c += v[i];
        }
        if(v[i] <= d){
            d -= v[i];
            if(func(v,i+1)) return true;
            d += v[i];
        }
        
        return false;
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        int size = matchsticks.size();
        if(size<4){
            return false;
        }
        
        int sum =0;
        for(int i=0;i<size;i++){
            sum+=matchsticks[i];
        }
        
        if( sum % 4!=0){
            return false;
        }
        a = sum/4 , b = sum/4 , c = sum/4 , d= sum/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        
        return func(matchsticks,0);
        
    }
};
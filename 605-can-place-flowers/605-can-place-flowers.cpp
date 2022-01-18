class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        for(int i=0;i<flowerbed.size();){
            if(flowerbed[i]==0){
                if(i-1>=0 and i+1<flowerbed.size()){
                    if(flowerbed[i-1]==0 and flowerbed[i+1]==0){
                        i+=2;
                        n--;
                        if(n==0){
                            return true;
                        }
                    }
                    else{
                        i+=1;
                    }
                }
                else if(i-1<0 and i+1>=flowerbed.size()){
                    i+=2;
                    n--;
                    if(n==0){
                        return true;
                    }
                }
                else if(i-1<0){
                    if(flowerbed[i+1]==0){
                        i+=2;
                        n--;
                        if(n==0){
                            return true;
                        }
                    }
                    else{
                        i+=1;
                    }
                }
                else if(i+1>=flowerbed.size()){
                    if(flowerbed[i-1]==0){
                        i+=2;
                        n--;
                        if(n==0){
                            return true;
                        }
                    }
                    else{
                        i+=1;
                    }
                }
            }
            else{
                i+=1;    
            }
            
        }
        return false;
    }
};
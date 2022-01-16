class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int index;
        int temp;
        int maxi=INT_MIN;
        for(int i=0;i<seats.size();i++){
            if(seats[i]==0){
                if(i==0){
                    temp=INT_MAX;
                }
                else{
                    temp=i-index;    
                }
                int j=i;
                int dummy=INT_MAX;
                while(j<seats.size()){
                    if(seats[j]==1){
                        dummy=j;
                        break;
                    }
                    j++;
                }
                // cout<<"dummy-i = "<<dummy-i<<endl;
                // cout<<temp<<endl;
                maxi=max(maxi,min((dummy-i),temp));
            }
            else{
                index=i;
            }
        }
        return maxi;
    }
};
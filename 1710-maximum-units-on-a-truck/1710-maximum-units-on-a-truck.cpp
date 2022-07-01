class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(int i=0;i<boxTypes.size();i++){
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        sort(boxTypes.begin(),boxTypes.end());
        reverse(boxTypes.begin(),boxTypes.end());
        for(int i=0;i<boxTypes.size();i++){
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        // for(int i=0;i<boxTypes.size();i++){
        //     cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<endl;
        // }
        int totalUnit=0;
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize==0){
                break;
            }
            truckSize -= boxTypes[i][0];
            if(truckSize < 0){
                boxTypes[i][0] = truckSize + boxTypes[i][0];
                truckSize = 0;
            }
            totalUnit += (boxTypes[i][0]*boxTypes[i][1]);   
        }
        
        return totalUnit;
    }
};
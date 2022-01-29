class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size=heights.size();
        stack<int> st;
        vector<int> left(size,-1);
        vector<int> right(size,-1);
        for(int i=0;i<size;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=0;
            }
            else{
                left[i]=st.top()+1;
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=size-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=size-1;
            }
            else{
                right[i]=st.top()-1;
            }
            st.push(i);
        }
        
        int maxA=INT_MIN;
        for(int i=0;i<size;i++){
            maxA=max(maxA,heights[i]*(right[i]-left[i]+1));
        }
        
        return maxA;
        
        
    }
};
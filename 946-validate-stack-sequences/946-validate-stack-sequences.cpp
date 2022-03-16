class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n=pushed.size();
        int i=0;
        int j=0;
        while(i<n || j<n){
            if(i<n){
               st.push(pushed[i]);
               i++;  
            } 
            while(j<n){
                if(!st.empty()){
                    if(st.top()==popped[j]){
                        st.pop();
                        j++;
                    }
                    else{
                        if(i>=n){
                            j++;
                        }
                        break;
                    }
                }
                else{
                    break;
                }
                
            }
        }
        return (st.size()==0);
    }
};
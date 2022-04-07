class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for (int i:stones){
            q.push(i);
        }
        int size=q.size();
        int res;
        if(size==1){
            return q.top();
        }
        
        while(q.size()!=0){
            int a = q.top();
            q.pop();
            int b= q.top();
            q.pop();
            if(a!=b){
                q.push(abs(a-b));    
            }
            // cout<<size<<endl;
            if(q.size()==1){
                return q.top();
            }
            if(q.size()==0){
                return 0;
            }
            // cout<<a<<" "<<b<<endl;
        }
        return 0;
    }
};
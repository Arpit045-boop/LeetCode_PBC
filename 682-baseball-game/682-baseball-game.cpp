class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> temp;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                temp.pop_back();
            }
            else if(ops[i]=="D"){
                int num_double = temp[temp.size()-1]*2;
                // cout<<num_double<<endl;
                temp.push_back(num_double);
            }
            else if(ops[i]=="+"){
                int num_sum = temp[temp.size()-1] + temp[temp.size()-2];
                // cout<<num_sum<<endl;
                temp.push_back(num_sum);
            }
            else{
                stringstream geek(ops[i]);
                int x = 0;
                geek >> x;
                
                
                temp.push_back(x);
            }
        }
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        return sum;
    }
};
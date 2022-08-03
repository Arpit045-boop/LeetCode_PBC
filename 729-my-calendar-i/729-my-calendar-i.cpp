class MyCalendar {
public:
    vector<pair<int,int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(v.size()==0){
            v.push_back(make_pair(start,end));
        }
        else{
            for(int i=0;i<v.size();i++){
                if(v[i].first <= start and start<v[i].second){
                    return false;
                }
                else if(start <=v[i].first and v[i].first<end){
                    return false;
                }
                else if(v[i].first<end and end<v[i].second){
                    return false;
                }
            }       
        }
        v.push_back(make_pair(start,end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
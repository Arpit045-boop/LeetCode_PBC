class MyHashMap {
public:
    vector<pair<int,int>> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for ( int i=0;i<v.size();i++){
            if(v[i].first == key){
                v[i].second = value;
                break;
            }
        }
        v.push_back(make_pair(key,value));
        
        
        
        
    }
    
    int get(int key) {
        for(auto p:v){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        vector<pair<int,int>> v1;
        for(auto p:v){
            if(p.first != key){
                v1.push_back(p);
            }
        }
        v=v1;
     }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
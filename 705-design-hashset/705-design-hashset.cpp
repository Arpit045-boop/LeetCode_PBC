class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        v.push_back(key);
    }
    
    void remove(int key) {
        vector<int> v1;
        for(int i:v){
            if(i!=key){
                v1.push_back(i);
            }
        }
        v=v1;
    }
    
    bool contains(int key) {
        if(find(v.begin(),v.end(),key)!=v.end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
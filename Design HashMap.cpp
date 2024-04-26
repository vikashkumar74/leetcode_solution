class MyHashMap {
    private:
    vector<pair<int, int>> map;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto& at:map){
            if(at.first==key){
                at.second=value;
                return;
            }
          
        }
          map.push_back({key,value});
    }
    
    int get(int key) {
       for(auto at:map){
        if(at.first==key)
        return at.second;
       } 
       return -1;
    }
    
    void remove(int key) {
              for (auto it = map.begin(); it != map.end(); ++it) {
        if (it->first == key) {
            map.erase(it);
            return;
        }
    }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

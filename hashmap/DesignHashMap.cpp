class MyHashMap {
    map<int,int>mp;
public:
    MyHashMap() {
        mp[0] =0;
    }
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end())
        {
            mp.insert({key, value});
        }
        else
        mp[key] = value;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end())
        return -1 ;
        else
        return mp[key];
    }
    
    void remove(int key) {
        mp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

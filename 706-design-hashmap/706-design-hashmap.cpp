class MyHashMap {
public:
    
    vector<int> node;
    // int hash(int key) {
    //     return key%n;
    // }
    MyHashMap() {
        node.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        node[key]=value;
    }
    
    int get(int key) {
        return node[key];
    }
    
    void remove(int key) {
        node[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
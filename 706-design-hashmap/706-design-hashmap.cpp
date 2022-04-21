class MyHashMap {
public:
    int n = 1000000;
    vector<int> node;
    int hash(int key) {
        return key%n;
    }
    MyHashMap() {
        node.resize(n+1,-1);
    }
    
    void put(int key, int value) {
        node[hash(key)]=value;
    }
    
    int get(int key) {
        return node[hash(key)];
    }
    
    void remove(int key) {
        node[hash(key)]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
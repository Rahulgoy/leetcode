class MyHashSet {
public:
    // unordered_map<int,int> hash;
    
    int size = 1000000;
    int Node[1000000];
    int hash(int key) {
        return key%size;
    }
    MyHashSet() {
        
    }
    
    void add(int key) {
        // hash[key]=1;
        Node[hash(key)]=1;
    }
    
    void remove(int key) {
        // hash[key]=0;
        Node[hash(key)]=0;
    }
    
    bool contains(int key) {
        // if(hash[key]) return true;
        // else return false;
        
        return Node[hash(key)]==1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
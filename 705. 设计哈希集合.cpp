class MyHashSet {
public:
    /** Initialize your data structure here. */
    int a[1000005];
    MyHashSet() {
        memset(a,0,sizeof(a));
    }
    
    void add(int key) {
        a[key]=1;
    }
    
    void remove(int key) {
        a[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return a[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

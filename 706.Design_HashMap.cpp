class MyHashMap {
public:
//     initilize data structure here
    vector<int>vc;
    int size;
    MyHashMap() {
        size=1e6+1;
        vc.resize(size);
//         initialy empty array store all value -1
        fill(vc.begin(),vc.end(),-1);
        
    }
    
    void put(int key, int value) {
        vc[key]=value;
    }
    
    int get(int key) {
        return vc[key];
        
    }
    
    void remove(int key) {
        vc[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
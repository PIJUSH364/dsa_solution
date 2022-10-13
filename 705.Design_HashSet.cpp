class MyHashSet {
public:
//     create  chaing of hash table 
//     chain basicaly build doubly linklist
   vector<list<int>>vc;
    int size;
    MyHashSet() {
        size=1000;
        vc.resize(size);
    }
//     hasing position(moduloo value) where value key value store
    int hash (int key){
        return key%size;
    }
//     itterator create
    list <int> :: iterator search (int key){
        int i=hash(key);
        return find(vc[i].begin(),vc[i].end(),key);
    }
    void add(int key) {
        if(contains(key)) return;
        int i=hash(key);
        vc[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i=hash(key);
        vc[i].erase(search(key));
        
    }
    
    bool contains(int key) {
        int i=hash(key);
        if(search(key) !=vc[i].end()) {
            return true;
        }else{
            return false;
        }
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
class MyHashMap {
public:
//     initilize data structure here
    vector<list<pair<int,int>>>vc;
    int size;
    MyHashMap() {
        size=10000;
        vc.resize(size);        
    }
    int hash (int key){
        return key%size;
    }
    list<pair<int,int>> :: iterator search(int key){
        int i=hash(key);
        list<pair<int,int>> :: iterator it=vc[i].begin();
        while(it!=vc[i].end()){
            if(it->first == key) return it;
            it++;
        }
        return it;
    }
    void put(int key, int value) {
        int i=hash(key);
        remove(key);
        vc[i].push_back({key,value});
    }
    
    int get(int key) {
        int i=hash(key); 
        list<pair<int,int>> :: iterator it= search( key);
        if(it==vc[i].end()){
            return -1;
        }else {
            return it->second;
        }
        
    }
    
    void remove(int key) {
        int i=hash(key);
        list<pair<int,int>> :: iterator it= search( key);
        if(it!=vc[i].end()){
            vc[i].erase(it);
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
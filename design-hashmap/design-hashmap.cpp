class MyHashMap {
public:
    vector<int> v;
    MyHashMap() {
        v.resize(10000, -1);
    }
    void put(int k, int l) {
        if(k>=v.size()) v.resize(k+2, -1);
        v[k]=l;
    }
    int get(int k) {
        if(k>=v.size())   return -1;
        return v[k];
    }
    void remove(int k) {
        if(k>=v.size()) return;
        v[k]=-1;
    }
};
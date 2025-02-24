class MyHashMap {
private:
    static const int SIZE = 1000; // Size of the hash table
    vector<list<pair<int, int>>> table; // Vector of linked lists for chaining
    
    int hash(int key) {
        return key % SIZE; // Hash function
    }
    
    list<pair<int, int>>::iterator find(int key, int idx) {
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) return it; // Key found
        }
        return table[idx].end(); // Key not found
    }

public:
    MyHashMap() : table(SIZE) {}

    void put(int key, int value) {
        int idx = hash(key);
        auto it = find(key, idx);
        if (it != table[idx].end()) {
            it->second = value; // Update value if key exists
        } else {
            table[idx].push_back({key, value}); // Add new key-value pair
        }
    }

    int get(int key) {
        int idx = hash(key);
        auto it = find(key, idx);
        if (it != table[idx].end()) {
            return it->second; // Return value if key exists
        }
        return -1; // Key not found
    }

    void remove(int key) {
        int idx = hash(key);
        auto it = find(key, idx);
        if (it != table[idx].end()) {
            table[idx].erase(it); // Remove key-value pair if key exists
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
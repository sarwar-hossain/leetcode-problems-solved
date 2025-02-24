class MyHashSet {
private:
    static const int SIZE = 1000; // Size of the hash table
    vector<list<int>> table; // Vector of linked lists for chaining
    
    int hash(int key) {
        return key % SIZE; // Hash function: simple modulo
    }

public:
    MyHashSet() : table(SIZE) {}

    void add(int key) {
        int idx = hash(key);
        for (int val : table[idx]) {
            if (val == key) return; // Key already exists
        }
        table[idx].push_back(key); // Add the key
    }

    void remove(int key) {
        int idx = hash(key);
        table[idx].remove(key); // Remove the key
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int val : table[idx]) {
            if (val == key) return true; // Key found
        }
        return false; // Key not found
    }
};

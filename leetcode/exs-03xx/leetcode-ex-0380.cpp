class RandomizedSet {
public:
    unordered_set<int> s;

    RandomizedSet() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }

    bool insert(int val) {
        if (s.find(val) == s.end()) {
            s.insert(val);
            return true;
        }
        s.insert(val);
        return false;
    }

    bool remove(int val) {
        if (s.find(val) == s.end()) return false;
        s.erase(val);
        return true;
    }

    int getRandom() {
        auto it = s.begin();
        advance(it, rand() % s.size());
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
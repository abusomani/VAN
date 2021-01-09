class OrderedStream {
private:
    vector<string> W;
    int idx = 1;
public:
    OrderedStream(int n) {
        W.resize(n+1, "");
    }
    
    vector<string> insert(int id, string value) {
        W[id] = value;
        vector<string> res;
        while(idx < W.size() and W[idx] != "")
            res.push_back(W[idx++]);
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */
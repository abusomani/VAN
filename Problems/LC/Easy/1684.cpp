class Solution {
private:
    bool isConsistent(string word, unordered_set<char> &St){
        for(auto &c : word)
            if(!St.count(c))
                return false;
        
        return true;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> St(allowed.begin(), allowed.end());
        int res = 0;
        for(auto &word : words) 
            if(isConsistent(word, St))
                res++;
        return res;
    }
};
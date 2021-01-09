class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> J(jewels.begin(), jewels.end());
        int res = 0;
        for(auto &c : stones)
            if(J.count(c))
                res++;
        return res;
    }
};
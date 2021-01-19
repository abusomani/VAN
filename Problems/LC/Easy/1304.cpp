class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        if(n&1)
            res.push_back(0);
        n = n/2;
        int L = 1;
        while(n--)
            res.push_back(L), res.push_back(-L), L++;
        return res;
    }
};
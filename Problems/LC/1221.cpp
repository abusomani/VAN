class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int L = 0, R = 0;
        for(auto &c : s) {
            if(c == 'R')R++;
            else L++;
            res += L == R;
        }
        return res;
    }
};
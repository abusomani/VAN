class Solution {
public:
    vector<int> sortByBits(vector<int>& V) {
        sort(V.begin(), V.end(), [&](const int &a, const int &b){
            int x = __builtin_popcount(a), y = __builtin_popcount(b);
            return x == y ? a < b : x < y;
        });
        return V;
    }
};
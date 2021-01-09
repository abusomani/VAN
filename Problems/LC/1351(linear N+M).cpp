class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0, N = grid.size(), M = grid[0].size(), L = 0, R = M-1;
        while(L < N and R >= 0) {
            if(grid[L][R] >= 0)
                L++;
            else {
                res += N-L;
                R--;
            }
        }
        return res;
    }
};
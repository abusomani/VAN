class Solution {
private:
    int binarySearch(vector<int> &V) {
        int N = V.size(), L = 0, R = N-1, ans = N;
        while(L <= R) {
            int mid = L + (R-L)/2;
            if(V[mid] >= 0) {
                L = mid+1;
            } else {
                ans = mid;
                R = mid-1;
            }
        }
        return N - ans;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0, N = grid.size();
        for(int i=0; i<N; i++)
            res += binarySearch(grid[i]);
        
        return res;
    }
};
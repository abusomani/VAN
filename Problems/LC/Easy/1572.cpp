class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0 , N = mat.size();
        for(int i=0; i<N; i++)
            res += mat[i][i];
        for(int i=0; i<N; i++)
            res += mat[i][N-i-1];
        return res - (N &1 ? mat[N/2][N/2] : 0);
    }
};
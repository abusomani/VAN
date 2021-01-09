class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> rows(n, 0), cols(m, 0);
        for(auto &index: indices)
            rows[index[0]]++, cols[index[1]]++;
        int res = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if((rows[i]+cols[j])&1)
                    res++;
        
        return res;
    }
};
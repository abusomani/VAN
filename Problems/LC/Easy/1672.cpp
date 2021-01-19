class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        int N = accounts.size();
        for(int i=0; i<N; i++)
        {
            int sm = 0;
            for(auto &num : accounts[i])
                sm += num;
            ans = max(ans, sm);
        }
        return ans;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> Mp;
        int ans = 0;
        for(auto &num : nums) {
            if(Mp.count(num))
                ans += Mp[num];
            Mp[num]++;
        }
        return ans;
    }
};
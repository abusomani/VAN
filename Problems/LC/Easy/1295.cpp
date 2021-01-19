class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto &num : nums)
            res += to_string(num).size()&1 ? 0 : 1;
        return res;
    }
};
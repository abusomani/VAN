class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sm = 0;
        for(auto &num : nums) {
            sm += num;
            res.push_back(sm);
        }
        return res;
    }
};
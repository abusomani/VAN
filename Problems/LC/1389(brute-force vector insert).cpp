class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int N = nums.size();
        vector<int> res;
        for(int i=0; i<N; i++)
            res.insert(res.begin() + index[i], nums[i]);
        return res;
    }
};
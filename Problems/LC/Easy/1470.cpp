class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int N = nums.size();
        vector<int> res(N);
        int i = 0, j = n, k = 0;
        while(i < n) {
            res[k++] = nums[i++];
            res[k++] = nums[j++];
        }
        return res;
    }
};
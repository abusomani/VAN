class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        int N = nums.size();
        vector<int> res;
        for (int i = 0; i < N; i += 2)
        {
            while (nums[i]--)
                res.push_back(nums[i + 1]);
        }
        return res;
    }
};
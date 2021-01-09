class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int mn = INT_MAX;
        map<int,int> Mp;
        for(auto &num : nums)
            mn = min(mn, num), Mp[num]++;
        int sm = 0;
        for(auto &i : Mp)
        {
            sm += i.second;
            i.second = sm;
        }
        vector<int> res;
        for(auto &num : nums)
        {
            auto it = Mp.find(num);
            --it;
            if(num == mn)
                res.push_back(0);
            else
                res.push_back(it->second);
        }
        return res;
    }
};

class Solution1
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> cnt(101, 0);
        for (auto &num : nums)
            cnt[num]++;
        int sm = 0;
        for (int i = 0; i < 101; i++)
            sm += cnt[i], cnt[i] = sm;
        vector<int> res;
        for (auto &n : nums)
            res.push_back(n == 0 ? 0 : cnt[n - 1]);
        return res;
    }
};
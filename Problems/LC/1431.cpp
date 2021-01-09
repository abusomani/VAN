class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for(auto &num : candies)
            mx = max(mx, num);
        vector<bool> res;   
        for(auto &num : candies) 
            res.push_back(num + extraCandies >= mx ? true : false);
        return res;
    }
};
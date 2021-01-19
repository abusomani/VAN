class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int> Mp;
        int mx = 0;
        for(auto &rectangle: rectangles){
            int mn = min(rectangle[0], rectangle[1]);
            Mp[mn]++;
            mx = max(mx, mn);
        }
        return Mp[mx];
    }
};
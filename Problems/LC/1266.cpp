class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0, N = points.size();
        for(int i=1; i<N; i++) {
            int a = points[i-1][0] , b = points[i-1][1];
            int x = points[i][0] , y = points[i][1];
            res += max(abs(x - a), abs(y-b));
        }
        return res;
    }
};
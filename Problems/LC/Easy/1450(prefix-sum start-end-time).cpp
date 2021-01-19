class Solution {
private:
    const int MAX = 1005;
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int> cnt(MAX, 0);
        for(auto &time: startTime)cnt[time]++;
        for(auto &time: endTime)cnt[time+1]--;
        for(int i=1; i<MAX; i++)
            cnt[i] += cnt[i-1];
        return cnt[queryTime];
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int N = arr.size(), mn = -1;
        vector<int> res(N, -1);
        for(int i=N-1; i>=0; i--){
            res[i] = mn;
            mn = max(mn, arr[i]);
        }
        return res;
    }
};
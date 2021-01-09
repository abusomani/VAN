class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0, N = arr.size();
        vector<int> prefix = {0};
        for(auto &num : arr)
            prefix.push_back(prefix.back()+num);
        for(int len=1; len <= N; len+= 2)  {
            for(int i=0; i<N; i++) {
                if(len + i <= N)
                    res += prefix[len+i] - prefix[i];
            }
        }
        return res;
    }
};
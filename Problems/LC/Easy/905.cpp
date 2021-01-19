class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int N = A.size(), L = 0, R = N-1;
        vector<int> res(N);
        for(auto &num : A) {
            if(num&1)
                res[R--] = num;
            else
                res[L++] = num;
        }
        return res;
    }
};
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int N = S.size(); int L = 0, bracket = 0;
        for(int i=0; i<N; i++) {
            if(S[i] == '(')bracket++;
            else bracket--;
            if(bracket == 0) {
                for(int j=L+1; j<i; j++)
                    res += S[j];
                L = i+1;
            }
        }
        return res;
    }
};
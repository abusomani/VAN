class Solution {
public:
    string sortString(string s) {
        map<char, int> Mp;
        for(auto &c : s)Mp[c]++;
        string res;
        bool isDone = true;
        while(isDone) {
            isDone = false;
            for(auto &i : Mp)
            {
                if(i.second > 0) {
                    isDone = true;
                    res += i.first;
                    i.second--;
                }
            }
            for(auto it= Mp.rbegin(); it != Mp.rend(); it++) {
                pair<char,int> P = *it;
                if(P.second > 0) {
                    isDone = true;
                    res += P.first;
                    Mp[P.first]--;
                } 
            }
        }
        return res;
    }
};
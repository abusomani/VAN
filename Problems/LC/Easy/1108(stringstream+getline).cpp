class Solution {
public:
    string defangIPaddr(string address) {
        string res = "", tmp;
        stringstream ss(address);
        while(getline(ss, tmp, '.')) {
            res += tmp + "[.]";
        }
        return res.substr(0, res.size()-3);
    }
};
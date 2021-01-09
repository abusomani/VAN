class Solution {
public:
    string interpret(string command) {
        string res = "";
        bool bracketStart = false , isL = false;
        for(auto &ch : command) {
            if(ch == 'G' or ch == 'a' or ch == 'l')
                res += string(1, ch), isL = ch == 'l';
            else if(ch == '(')
                bracketStart = true, isL = false;
            else if(ch == ')' and !isL)
                res += "o", bracketStart = false;
        }
        return res;
    }
};
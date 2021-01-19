class Solution
{
public:
    int maxDepth(string s)
    {
        int res = 0, L = 0;
        for (auto &c : s)
        {
            if (c == '(')
                L++, res = max(res, L);
            else if (c == ')')
                L--;
        }
        return res;
    }
};
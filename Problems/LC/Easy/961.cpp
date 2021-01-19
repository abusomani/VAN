class Solution
{
public:
    int repeatedNTimes(vector<int> &A)
    {
        int N = A.size() / 2;
        unordered_map<int, int> Mp;
        for (auto &num : A)
        {
            Mp[num]++;
            if (Mp[num] == N)
                return num;
        }
        return -1;
    }
};
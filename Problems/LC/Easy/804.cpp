class Solution
{
private:
    vector<string> codes = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string toMorse(string word)
    {
        string res;
        for (auto &c : word)
            res += codes[c - 'a'];
        return res;
    }

public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        unordered_set<string> St;
        for (auto &word : words)
            St.insert(toMorse(word));
        return (int)St.size();
    }
};
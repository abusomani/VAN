class Solution {
private:
    unordered_set<char> Vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool isVowel(char ch) {
        return Vowels.count(ch);
    }
public:
    bool halvesAreAlike(string s) {
        int N = s.size(), res = 0;
        for(int i=0; i<N/2; i++)
            if(isVowel(s[i]))
                res++;
        for(int i=N/2; i<N; i++)
            if(isVowel(s[i]))
                res--;
        return res == 0;        
    }
};
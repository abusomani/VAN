class Solution {
public:
    int numberOfSteps (int num) {
        int level = 0;
        while(num) {
            if(num&1)
                num--;
            else
                num >>= 1;
            level++;
        }
        return level;
    }
};
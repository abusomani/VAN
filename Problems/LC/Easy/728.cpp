class Solution {
private:
    bool isSelfDividing(int num) {
        int N = num;
        while(num) {
            int x = num%10;
            if(x == 0 or N%x != 0)return false;
            num /= 10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left; i<=right; i++)
            if(isSelfDividing(i))
                res.push_back(i);
        return res;
    }
};
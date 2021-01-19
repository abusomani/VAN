class Solution {
public:
    int subtractProductAndSum(int num) {
        int mul = 1, sm = 0;
        while(num) {
            mul *= num % 10;
            sm += num % 10;
            num /= 10;
        }
        return mul - sm;
    }
};
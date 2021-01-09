class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int N = prices.size();
        vector<int> justSmaller(N, 0);
        stack<int> St;
        for(int i=N-1; i>=0; i--) {
            while(!St.empty() and St.top() > prices[i])
                St.pop();
            if(St.empty())
                justSmaller[i] = 0;
            else
                justSmaller[i] = St.top();
            St.push(prices[i]);
        }
        for(int i=0; i<N; i++)
            prices[i] -= justSmaller[i];
        return prices;
    }
};
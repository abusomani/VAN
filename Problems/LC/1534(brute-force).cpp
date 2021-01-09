class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int N = arr.size(), res = 0;
        for(int i=0; i<N; i++) {
            for(int j=i+1; j<N; j++) {
                if(abs(arr[i] - arr[j]) <= a) {
                    for(int k=j+1; k<N; k++) {
                        if(abs(arr[j] - arr[k]) <= b and abs(arr[k] - arr[i]) <= c)
                            res++;
                    }
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> St;
        for(auto &edge: paths)
        {
            St[edge[0]]++;
            if(!St.count(edge[1]))
               St[edge[1]] = 0;
        }
        for(auto &i : St)
            if(i.second == 0)
                return i.first;
        
        return "Somani";
    }
};
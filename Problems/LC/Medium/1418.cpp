struct Order{
    string customerName;
    string tableNumber;
    string foodItem;
};
class Solution {
private:
    vector<string> constructHeader(set<string>&St) {
        vector<string> header = {"Table"};
        for(auto &s : St)
            header.push_back(s);
        return header;
    }
    vector<string> constructRows(string tableNumber, map<string,unordered_set<string>> &Mp, vector<string> &H) {
        vector<string> res;
        res.push_back(tableNumber);
        int N = H.size();
        for(int i=1; i<N; i++) {
            int sz = Mp[H[i]].size();
            res.push_back(to_string(sz));
        }
        return res;
    }
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> res;
        map<int, map<string, unordered_set<string>>> Table; // Table Number -> Recipe -> Person
        set<string> foodItems;
        for(auto &order: orders) {
            Order o({order[0], order[1], order[2]});
            Table[stoi(o.tableNumber)][o.foodItem].insert(o.customerName);
            foodItems.insert(o.foodItem);
        }
        vector<string> header = constructHeader(foodItems);
        res.push_back(header);
        for(auto &p : Table) 
            res.push_back(constructRows(to_string(p.first), p.second, header));
        return res;
    }
};
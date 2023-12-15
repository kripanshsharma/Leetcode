class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> p;
        for(auto& e: paths)
            p.insert(e[1]);
        for(auto& e: paths)
            p.erase(e[0]);
        return *p.begin(); 
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
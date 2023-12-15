class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        const int n = paths.size();
        string s[n], e[n];

        for(int i = 0; i < n; i++) {
            s[i] = paths[i][0];
            e[i] = paths[i][1];
        }
        sort(s, s+n);
        sort(e, e+n);
        int search=0;
        for (int i = 0; i < n; i++) {
            string x = e[i];
            search=lower_bound(s+search, s+n, x)-s;

            if (search == n || s[search] != x) 
                return move(x);
        }
        return NULL; 
    }
};
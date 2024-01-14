#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    array<int, 26>&  alpha(const string& word, array<bool, 26>& S){
        array<int, 26>  A;
        A.fill(0);
        for(char c: word){
            int i=c-'a';
            S[i]=1;
            A[i]++;
        }
        return A;
    }

    bool closeStrings(string& word1, string& word2) {
        array<bool, 26> S1, S2;
        S1.fill(0), S2.fill(0);
        array<int, 26> A1=alpha(word1, S1);
        array<int, 26> A2=alpha(word2, S2);
        if (S1!=S2) return 0;
        sort(A1.begin(), A1.end());
        sort(A2.begin(), A2.end());
        return A1==A2;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

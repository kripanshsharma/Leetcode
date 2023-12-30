class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        if (n==1) return 1;
        int freq[26]={0};
        for(auto& s: words)
            for(char c: s)
                freq[c-'a']++;
        for (int i=0; i<26; i++)
            if (freq[i]%n!=0) return 0;
        return 1;
    }
};
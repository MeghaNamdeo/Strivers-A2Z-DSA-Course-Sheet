class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        int size = freq.size();
        return size;
    }
};
/*
TC:O(n)
SC:O(n)
*/
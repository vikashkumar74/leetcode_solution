class Solution {
public:
    int longestIdealString(string s, int k) {
            vector<int> vt(26, 0);
    int longest = 0;
    for (char chara : s) {
        int max_length = 0;
        for (int i = 0; i < 26; ++i) {
            if (abs(chara - 'a' - i) <= k) {
                max_length = max(max_length, vt[i]);
            }
        }
        vt[chara - 'a'] = max_length + 1;
        longest = max(longest, vt[chara - 'a']);
    }
    return longest;
    }
};

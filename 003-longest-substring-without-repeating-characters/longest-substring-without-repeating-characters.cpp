// Given a string, find the length of the longest substring without repeating characters.
//
// Examples:
//
// Given "abcabcbb", the answer is "abc", which the length is 3.
//
// Given "bbbbb", the answer is "b", with the length of 1.
//
// Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256, -1);
        int start = -1;
        int maxlen = 0;
        for(int i = 0; i < s.length(); i++){
            if (map[s[i]] > start)
            {
                start = map[s[i]];
            }
            map[s[i]] = i;
            maxlen = max(maxlen, i - start);
        }
        
        return maxlen;
    }
};

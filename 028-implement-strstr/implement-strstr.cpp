//
// Implement strStr().
//
//
//
// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//
//
// Example 1:
//
// Input: haystack = "hello", needle = "ll"
// Output: 2
//
//
//
// Example 2:
//
// Input: haystack = "aaaaa", needle = "bba"
// Output: -1
//
//


class Solution {
public:
    int strStr(string haystack, string needle) {
        if (!needle.size())
            return 0;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (needle.size() <= haystack.size() - i)
            {
                if (haystack[i] == needle[0])
                {
                    if (string(haystack, i, needle.size()) == needle)
                        return i;
                }
            }
            else
                return -1;
        }
        return -1;
    }
};

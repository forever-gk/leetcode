// Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.
//
// This is case sensitive, for example "Aa" is not considered a palindrome here.
//
// Note:
// Assume the length of given string will not exceed 1,010.
//
//
// Example: 
//
// Input:
// "abccccdd"
//
// Output:
// 7
//
// Explanation:
// One longest palindrome that can be built is "dccaccd", whose length is 7.
//
//


class Solution {
public:
    int longestPalindrome(string s) {
        int hash[128] = {0};
        int result = 0;
        for (const auto &c : s)
        {
            ++hash[c];
        }
        for (const auto &num : hash)
        {
            if (num>=2)
                result += num / 2;
                
        }
        result = result * 2;
        return result < s.size() ? result + 1 : result;
    }
};

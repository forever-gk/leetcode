// Write a function that takes a string as input and reverse only the vowels of a string.
//
//
// Example 1:
// Given s = "hello", return "holle".
//
//
//
// Example 2:
// Given s = "leetcode", return "leotcede".
//
//
//
// Note:
// The vowels does not include the letter "y".
//


class Solution {
public:
    string reverseVowels(string s) {
        int dict[128] = {0};
        dict['a'] = 1, dict['A'] = 1;
        dict['e'] = 1, dict['E'] = 1;
        dict['i'] = 1, dict['I'] = 1;
        dict['o'] = 1, dict['O'] = 1;
        dict['u'] = 1, dict['U'] = 1;
        int i = 0, j = s.size()-1;
        while(i < j)
        {
            if (!dict[s[i]])
            {
                i++;
                continue;
            }
            if (!dict[s[j]])
            {
                j--;
                continue;
            }
            std::swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
    bool isVowels(char c)
    {
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return true;
            default:
                return false;
        }
    }
};

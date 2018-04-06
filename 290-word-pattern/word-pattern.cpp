// Given a pattern and a string str, find if str follows the same pattern.
//  Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.
//
// Examples:
//
// pattern = "abba", str = "dog cat cat dog" should return true.
// pattern = "abba", str = "dog cat cat fish" should return false.
// pattern = "aaaa", str = "dog cat cat dog" should return false.
// pattern = "abba", str = "dog dog dog dog" should return false.
//
//
//
//
// Notes:
// You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.
//
//
// Credits:Special thanks to @minglotus6 for adding this problem and creating all test cases.


class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream strcin(str);
        vector<string> vs;
        string s;
        while(strcin >> s) 
            vs.push_back(s);

        vector<string> ma(128);
        map<string, char> s2c;
        if (vs.size()!= pattern.size())
            return false;
        for(int i = 0; i < pattern.size(); i++)
        {
            if (ma[pattern[i]] == "" && s2c[vs[i]] == 0)
            {
                ma[pattern[i]] = vs[i];
                s2c[vs[i]] = pattern[i];
                
            }
            //else if (s2c[vs[i]] != pattern[i])
            else if (ma[pattern[i]] != vs[i])
                return false;
        }
        return true;
    }
};

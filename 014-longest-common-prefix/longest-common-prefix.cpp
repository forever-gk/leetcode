// Write a function to find the longest common prefix string amongst an array of strings.
//


class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if (strs.size() == 0)
            return prefix;
        if (strs.size() == 1)
            return strs[0];
       for (int pos = 0; pos < strs[0].size(); pos++){
            for (int i = 1; i < strs.size(); i++){
                if (pos >= strs[i].size() || strs[i][pos] != strs[0][pos]){
                    return prefix;
                }
            }
            prefix += strs[0][pos];
       }
       return prefix;
    }
};

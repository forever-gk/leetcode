// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//
// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
//


class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        char temp;
        for(auto ch : s)
        {
            switch (ch)
            {
                case '(':
                case '{':
                case '[':
                    vec.push_back(ch);
                    break;
                case ')':
                    if (vec.empty())
                        return false;
                    temp = vec.back();
                    vec.pop_back();
                    if(temp == '(')
                        break;
                    else
                        return false;
                    break;
                case '}':
                    if (vec.empty())
                        return false;
                    temp = vec.back();
                    vec.pop_back();
                    if(temp == '{')
                        break;
                    else
                        return false;
                    break;
                case ']':
                    if (vec.empty())
                        return false;
                    temp = vec.back();
                    vec.pop_back();
                    if(temp == '[')
                        break;
                    else
                        return false;
                    break;
                default:
                    break;
            }
        }
        if (vec.empty())
            return true;
        else
            return false;
    }
};

// The count-and-say sequence is the sequence of integers with the first five terms as following:
//
// 1.     1
// 2.     11
// 3.     21
// 4.     1211
// 5.     111221
//
//
//
// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
//
//
//
// Given an integer n, generate the nth term of the count-and-say sequence.
//
//
//
// Note: Each term of the sequence of integers will be represented as a string.
//
//
// Example 1:
//
// Input: 1
// Output: "1"
//
//
//
// Example 2:
//
// Input: 4
// Output: "1211"
//
//


class Solution {
public:
    string fun(string str){
        char ch = str[0];
        string outstr;
        int count = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if (str[i] == ch)
                count++;
            else
            {
                outstr += std::to_string(count);
                outstr.push_back(ch);
                count = 1;
                ch = str[i];
            }
        }
        outstr += std::to_string(count);
        outstr.push_back(ch);
        return outstr;
    }
    string countAndSay(int n) {
        if (n == 0)
            return "";
        string temp = "1";
        string str;
        for(;n > 0; n--){
            str = temp;
            temp = fun(temp);
        }
        return str;
        
    }
};

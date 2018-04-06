// Implement atoi to convert a string to an integer.
//
// Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.
//
// Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
//
// &nbsp;
//
// Requirements for atoi:
//
// The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.
//
// The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.
//
// If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
//
// If no valid conversion could be performed, a zero value is returned. If the correct value is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.
//


class Solution {
public:
    int myAtoi(string str) {
        long result = 0;
        int pos = 0;
        bool negetive = false;
        bool oor = false;
        for (pos =  0; pos < str.size(); ++pos) {
            //stripe whitespace
            if (str[pos] == ' ') {
                continue;
            } else if (str[pos] == '-') {
                negetive = true;
                pos++;
            } else if (str[pos] == '+') {
                pos++;   
            }
            break;
        }
        for (int i =  pos; i < str.size(); ++i) {
            
            if ((str[i] - '0') < 10 && (str[i] - '0') >= 0) {
                result = result * 10 + (str[i] - '0');
                oor  = negetive ? 0-result <= INT_MIN : result >=INT_MAX;
                if (oor)
                    return negetive ? INT_MIN : INT_MAX;
            } else {
                break;
            }
        }
        return negetive ? 0 - result : result;
    }
};

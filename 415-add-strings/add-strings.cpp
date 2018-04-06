// Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
//
// Note:
//
// The length of both num1 and num2 is < 5100.
// Both num1 and num2 contains only digits 0-9.
// Both num1 and num2 does not contain any leading zero.
// You must not use any built-in BigInteger library or convert the inputs to integer directly.
//
//


class Solution {
public:
    string addStrings(string num1, string num2) {
        
               std::size_t size = num1.size() > num2.size() ? num1.size() : num2.size();
        string result(size + 1, '0');
        if (size >= num1.size())
            num1 = string(size - num1.size() + 1, '0') + num1;
        if (size >= num2.size())
            num2 = string(size - num2.size() + 1, '0') + num2;

        char carry = '0';
        for (int64_t i = size; i >= 0; i--)
        {
            uint8_t onebit = char2num(num1[i]) + char2num(num2[i]) + char2num(carry);
            carry = num2char(onebit / 10);
            result[i] = num2char(onebit % 10);
        }

        if (result[0] == '0')
            return result.substr(1, size);

        return result;
    }
    uint8_t char2num(char ch)
    {
        return ch - '0';
    }
    char num2char(uint8_t num)
    {
        return '0' + num;
    }
};

// Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.
//
//
// For example, given the range [5, 7], you should return 4.
//
//
// Credits:Special thanks to @amrsaqr for adding this problem and creating all test cases.


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if (m == n)
            return m;
        int temp = 2;
        int i;
        for (i = 0; i < 31; i++)
        {
            if (n - m < temp)
                break;
            temp *= 2;
        }
        return (n & m) & (0x7fffffffffffffff << (i+1));
    }
};

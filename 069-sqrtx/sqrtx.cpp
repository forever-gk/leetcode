// Implement int sqrt(int x).
//
// Compute and return the square root of x.
//
// x is guaranteed to be a non-negative integer.
//
//
//
// Example 1:
//
// Input: 4
// Output: 2
//
//
//
// Example 2:
//
// Input: 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.
//
//


class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;
        if (x < 3)
            return 1;
        int temp = x / 2;
        int upper = x;
        while(pow(temp, 2) > x && temp > 1)
        {
            upper = temp;
            temp /=2;
        }
        int i = temp;
        for (; i < upper; i++)
        {
            if (pow(i,2) == x)
                return i;
            if (pow(i,2) > x)
                break;
        }
        return --i;
        
    }
};

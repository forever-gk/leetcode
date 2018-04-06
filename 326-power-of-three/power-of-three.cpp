//
//     Given an integer, write a function to determine if it is a power of three.
//
//
//     Follow up:
//     Could you do it without using any loop / recursion?
//
//
// Credits:Special thanks to @dietpepsi for adding this problem and creating all test cases.


/*class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        if (n%3 != 0)
            return false;
        return isPowerOfThree(n/3);
    }
};
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod(log10(n)/log10(3), 1)==0;
        //return (n > 0 && int(log10(n) / log10(3)) - log10(n) / log10(3) == 0);
    }
};

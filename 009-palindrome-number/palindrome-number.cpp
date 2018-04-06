// Determine whether an integer is a palindrome. Do this without extra space.
//
// click to show spoilers.
//
// Some hints:
//
// Could negative integers be palindromes? (ie, -1)
//
// If you are thinking of converting the integer to string, note the restriction of using extra space.
//
// You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?
//
// There is a more generic way of solving this problem.
//
//


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int len = 1;
        while(x / len >= 10)
        {
            len *= 10;
        }

        while(x % 10 == x /len)
        {
            x = x - (x / len) *len;
            x /= 10;
            len = len / 100;
            
            if (len == 0)
                if ( x < 10)
                    return true;
                else
                    return false;
        }
        return false;
        
    }
};

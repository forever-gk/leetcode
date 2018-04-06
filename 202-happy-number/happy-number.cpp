// Write an algorithm to determine if a number is "happy".
//
// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
//
// Example:&nbsp;19 is a happy number
//
//
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1
//
//
// Credits:Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.


/*
class Solution {
public:
    set<int> inLoop;
    bool isHappy(int n) {
        if (n == 1)
            return true;
        else if (inLoop.find(n) != inLoop.end())
            return false;
        else
            inLoop.insert(n);
        int temp = 0;
        while (n)
        {
            temp += pow(n%10, 2);
            n /= 10;
        }
        return isHappy(temp);
    }
};
*/
class Solution {
public:
    bool isHappy(int n) {
        set<int> inLoop;
        while(1){
            if (n == 1)
                return true;
            else if (inLoop.find(n) != inLoop.end())
                return false;
            else
                inLoop.insert(n);
            int temp = 0;
            while (n)
            {
                temp += pow(n%10, 2);
                n /= 10;
            }
            n = temp;
        }
    }
};

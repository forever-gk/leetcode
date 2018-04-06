// Description:
// Count the number of prime numbers less than a non-negative number, n.
//
// Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.


class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        prime[0] = false, prime[1] = false;
        int count = 0;
        int sqrtn = sqrt(n);
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;
                for (int j = 2; i*j < n; j++) {
                    prime[i*j] = false;
                }
            }
        }
        
        return count;
    }
};

// Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
//
// You may assume the integer do not contain any leading zero, except the number 0 itself.
//
// The digits are stored such that the most significant digit is at the head of the list.


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9 && carry == 1)
		    {
			    digits[i] = 0;
			    carry = 1;
		    }
		    else
		    {
			    digits[i] += carry;
			    carry = 0;
		    }
        }
        if(carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

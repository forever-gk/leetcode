//
// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//
//
// For example, given nums  = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
//
//
//
// Note:
//
// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.
//
//
//
// Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.


class Solution {
public:
    /*void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j< size-i-1; j++)
            {
                if(!nums[j] && nums[j+1])
                    std::swap(nums[j], nums[j+1]);
            }
        }
    }*/
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int j = 0;
        int i = 0;
        for (i = 0, j = 0; i < size; i++)
        {
            while(j < size && nums[j] == 0)
            {
                j++;
            }
            if (j >= size)
                break;
            else
                nums[i] = nums[j++];
        }
        for (; i< size; i++)
            nums[i] = 0;
    }
};

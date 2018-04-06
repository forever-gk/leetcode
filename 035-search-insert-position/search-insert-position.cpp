// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//
// You may assume no duplicates in the array.
//
// Example 1:
//
// Input: [1,3,5,6], 5
// Output: 2
//
//
//
// Example 2:
//
// Input: [1,3,5,6], 2
// Output: 1
//
//
//
// Example 3:
//
// Input: [1,3,5,6], 7
// Output: 4
//
//
//
// Example 1:
//
// Input: [1,3,5,6], 0
// Output: 0
//
//


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int medium = (start + end)/ 2;
        while(start <= end)
        {
            if (target < nums[medium])
                end = medium - 1;
            else if (target > nums[medium])
                start = medium + 1;
            else
                break;
            medium = (start + end) / 2;
        }
        if (start < end)
            return medium;
        else
            return start;
    }
};

// Given an integer array nums, find the sum of the elements between indices i and j (i &le; j), inclusive.
//
// Example:
//
// Given nums = [-2, 0, 3, -5, 2, -1]
//
// sumRange(0, 2) -> 1
// sumRange(2, 5) -> -1
// sumRange(0, 5) -> -3
//
//
//
// Note:
//
// You may assume that the array does not change.
// There are many calls to sumRange function.
//
//


class NumArray {
public:
    NumArray(vector<int> nums) : vec(nums.size(),0) {
        if (nums.size() == 0)
            return;
        vec[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            vec[i] = vec[i-1] + nums[i];
        }
        
    }
    
    int sumRange(int i, int j) {
        if (i==0)
            return vec[j];
        return vec[j] - vec[i - 1];
    }
private:
    vector<int> vec;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
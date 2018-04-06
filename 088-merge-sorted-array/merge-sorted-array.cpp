// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
//
//
// Note:
// You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if (n == 0)
            return;
        for(int i = 0; i < m; i++)
        {
            if (nums1[i] > nums2[0])
            {
                std::swap(nums1[i], nums2[0]);
                for (int j = 1; j < n; j++)
                {
                    if (nums2[j] > nums2[j - 1])
                        break;
                    else
                        std::swap(nums2[j], nums2[j - 1]);
                }
            }
        }
        nums1.insert(nums1.begin() + m, nums2.begin(), nums2.end());
        nums1.resize(m + n);
    }
};

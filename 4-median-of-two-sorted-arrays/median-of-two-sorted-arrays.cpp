class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        vector<int> nums(m + n);

        int i = 0, j = 0, k = 0;

        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
                nums[k++] = nums1[i++];
            else
                nums[k++] = nums2[j++];
        }

        while(i < m)
            nums[k++] = nums1[i++];

        while(j < n)
            nums[k++] = nums2[j++];

        int total = m + n;

        if(total % 2 != 0)
        {
            return nums[total / 2];
        }
        else
        {
            return (nums[total / 2] + nums[(total / 2) - 1]) / 2.0;
        }
    }
};
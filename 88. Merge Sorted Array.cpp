class Solution
{

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        //Index of nums1
        int i = m - 1;

        //Index of nums2
        int j = n - 1;

        //Index of last item in array
        int k = (m + n) - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];

            else 
                nums1[k--] = nums2[j--];
        }

        //Edge case - if i < 0 and j is still >= 0, that means that all items in
        //nums1 are sorted and in the correct position, so we just add
        //the remaining items from nums2 to the nums1 array.
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};
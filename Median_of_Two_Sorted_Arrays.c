// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0, index = 0;
    int mergedSize = nums1Size + nums2Size;
    int* merge = malloc(mergedSize * sizeof(int));
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j])
            merge[index++] = nums1[i++];
        else
            merge[index++] = nums2[j++];
    }
    if (i < nums1Size) {
        while (i < nums1Size)
            merge[index++] = nums1[i++];
    }
    if (j < nums2Size) {
        while (j < nums2Size)
            merge[index++] = nums2[j++];
    }

    if (mergedSize % 2 == 0)
        return (double)(merge[mergedSize / 2] + merge[(mergedSize / 2) - 1]) / 2;
    else
        return (double)merge[mergedSize / 2];
}

#include<iostream>
//



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if we found the target
        if (nums[mid] == target) {
            return mid;
        }

        // Determine which side is sorted
        if (nums[left] <= nums[mid]) {
            // Left side is sorted
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1; // target is in the left sorted portion
            } else {
                left = mid + 1; // target is in the right portion
            }
        } else {
            // Right side is sorted
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1; // target is in the right sorted portion
            } else {
                right = mid - 1; // target is in the left portion
            }
        }
    }

    // Target not found
    return -1;
    }
};
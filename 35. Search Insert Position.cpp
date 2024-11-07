#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the target is found, return its index
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    // If target not found, left is the insertion point
    return left;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    std::cout << "Insert position: " << searchInsert(nums, target) << std::endl;

    target = 2;
    std::cout << "Insert position: " << searchInsert(nums, target) << std::endl;

    target = 7;
    std::cout << "Insert position: " << searchInsert(nums, target) << std::endl;

    target = 0;
    std::cout << "Insert position: " << searchInsert(nums, target) << std::endl;

    return 0;
}

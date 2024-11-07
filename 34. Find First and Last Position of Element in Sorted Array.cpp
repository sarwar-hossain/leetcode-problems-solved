#include <iostream>
#include <vector>

std::vector<int> searchRange(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    std::vector<int> result = {-1, -1};

    // Helper function to find the leftmost (first) occurrence of target
    auto findLeft = [&]() -> int {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return (left < nums.size() && nums[left] == target) ? left : -1;
    };

    // Helper function to find the rightmost (last) occurrence of target
    auto findRight = [&]() -> int {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return (right >= 0 && nums[right] == target) ? right : -1;
    };

    result[0] = findLeft();
    result[1] = findRight();
    return result;
}

int main() {
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    std::vector<int> result = searchRange(nums, target);
    
    std::cout << "First and last positions: [" << result[0] << ", " << result[1] << "]" << std::endl;
    return 0;
}

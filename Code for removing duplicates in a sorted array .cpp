#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0; 

    int uniqueCount = 1; 

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[uniqueCount - 1]) {
            nums[uniqueCount++] = nums[i]; 
        }
    }

    return uniqueCount; 
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4}; 
    std::cout << removeDuplicates(nums) << std::endl;
    return 0;
}
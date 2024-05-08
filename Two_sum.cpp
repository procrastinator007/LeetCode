#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create an unordered map to store the indices of each number
        std::unordered_map<int, int> seen;

        // Loop through each number in the input vector
        for (int i = 0; i < nums.size();++i) {
            int num = nums[i];
            // Calculate the complement that will add up to the target
            int complement = target - num;

            // Check if the complement exists in the map
            if (seen.find(complement) != seen.end()) {
                // Return the indices as a vector
                return {seen[complement], i};
            }

            // Add the current number and its index to the map
            seen[num] = i;
        }

        // Return an empty vector if no solution is found
        // (Although the problem guarantees that there is exactly one solution)
        return {};
    }
};

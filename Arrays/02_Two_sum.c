// Two Sum problem solution in C with full explanation and comments
// Leetcode problem: 01

#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Create an array to store the result (indices of the two numbers)
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Loop through each element in the array
    for (int i = 0; i < numsSize; i++) {
        // For each element, loop through the remaining elements to find a pair
        for (int j = i + 1; j < numsSize; j++) {
            // Check if the sum of the two numbers equals the target
            if (nums[i] + nums[j] == target) {
                // If it does, store the indices in the result array
                result[0] = i;
                result[1] = j;
                // Set the return size to 2 since we are returning two indices
                *returnSize = 2;
                return result; // Return the result array
            }
        }
    }
    
    // If no pair is found, set return size to 0 and return NULL
    *returnSize = 0;
    return NULL;
}

// 📌 Topic: Arrays Basics

// 🔹 What is an Array?
// Array is a collection of elements stored in contiguous memory locations.
// It means all elements are stored next to each other in memory.

// 🔹 Real-Life Example:
// Imagine a row of lockers, where each locker stores one item.
// You can access any locker directly using its number (index).

// 🔹 Key Points:
// 1. Index starts from 0
// 2. Fixed size
// 3. Fast access using index

#include <stdio.h>

int main() {

    // 🔹 Declaration + Initialization
    int arr[5] = {10, 20, 30, 40, 50};

    // 🔹 Accessing elements
    printf("First element: %d\n", arr[0]);
    printf("Third element: %d\n", arr[2]);

    // 🔹 Traversing array
    printf("All elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 🔹 Time Complexity:
// Access element → O(1)
// Traversal → O(n)

// 🔹 Space Complexity:
// O(n)
// reverse a number with full explanation
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;

    // Ask the user for a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later use
    int originalNum = num;

    // Loop until the number becomes 0
    while (num != 0) {
        // Get the last digit of the number
        remainder = num % 10; // This gives us the last digit

        // Append the last digit to the reversed number
        reversed = reversed * 10 + remainder; // Shift the current digits left and add the new digit

        // Remove the last digit from the original number
        num /= 10; // This effectively removes the last digit
    }

    // Print the reversed number
    printf("Reversed number of %d is %d\n", originalNum, reversed);

    return 0;
}

// time complexity: O(n) where n is the number of digits in the input number
// space complexity: O(1) since we are using a constant amount of space to store the reversed number and the remainder

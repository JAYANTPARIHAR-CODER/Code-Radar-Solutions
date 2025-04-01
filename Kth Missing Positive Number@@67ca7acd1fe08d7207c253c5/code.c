#include <stdio.h>

// Function to find the Kth missing positive number
int findKthMissing(int arr[], int n, int k) {
    int count = 0; // Count of missing numbers found
    int num = 1;   // Start from the smallest positive integer
    int index = 0; // Index to track elements in the array

    while (count < k) {
        if (index < n && arr[index] == num) {
            // If number is in the array, move to the next element
            index++;
        } else {
            // If number is missing, increase the count
            count++;
        }

        // If we have found K missing numbers, return the current number
        if (count == k) {
            return num;
        }

        num++; // Move to the next number
    }
    
    return -1; // This should never be reached
}

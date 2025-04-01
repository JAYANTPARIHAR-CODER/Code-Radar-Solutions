#include <stdio.h>

#define MAX 1000  // Assuming values in the array are within this range

int findMostFrequent(int arr[], int n) {
    int freq[MAX] = {0};  // Frequency array
    int maxFreq = 0, mostFrequent = arr[0];

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        // Update most frequent element
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < mostFrequent)) {
            maxFreq = freq[arr[i]];
            mostFrequent = arr[i];
        }
    }
    return mostFrequent;
}

int main() {
    int n;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the most frequent element
    printf("%d\n", findMostFrequent(arr, n));

    return 0;
}

#include <stdio.h>

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return 0-based index
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read target element
    scanf("%d", &target);

    // Find and print the index
    printf("%d\n", findIndex(arr, n, target));

    return 0;
}

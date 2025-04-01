#include <stdio.h>

int countOccurrences(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, k;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of K
    scanf("%d", &k);

    // Count occurrences and print the result
    printf("%d\n", countOccurrences(arr, n, k));

    return 0;
}

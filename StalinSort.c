#include <stdio.h>

// Function to perform Stalin Sort
void stalinSort(int arr[], int n, int *sortedSize) {
    int j = 0; // Index to place the next valid element
    for (int i = 1; i < n; i++) {
        // If the current element is greater than or equal to the last sorted element
        if (arr[i] >= arr[j]) {
            j++;
            arr[j] = arr[i]; // Place it in the sorted part
        }
    }
    *sortedSize = j + 1; // Update the size of the sorted array
}

int main() {
    int arr[] = {3,2,1,6,0,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sortedSize;

    stalinSort(arr, n, &sortedSize);

    printf("Stalin-sorted array: ");
    for (int i = 0; i < sortedSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

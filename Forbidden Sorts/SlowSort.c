#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep()

// Function to add delay
void slowDelay() {
    // Adding a delay to simulate the inefficiency
    sleep(1); // Sleep for 1 second
}

// Function to perform Slowsort
void slowSort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    // Calculate the middle index
    int m = (l + r) / 2;

    // Recursively sort the left and right halves
    slowSort(arr, l, m);
    slowSort(arr, m + 1, r);

    // Add delay to simulate inefficiency
    slowDelay();

    // Compare and swap elements as needed
    if (arr[r] < arr[m]) {
        int temp = arr[r];
        arr[r] = arr[m];
        arr[m] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    slowSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

//Slowsort is an intentionally inefficient sorting algorithm designed to illustrate the concept of a sorting algorithm that performs poorly. 
//It is similar to Bogosort in its impracticality, but it has a different approach. 
//Slowsort works by recursively sorting parts of the array and introducing delays to ensure its inefficiency.

#include <stdio.h>

// Function to perform Gnome Sort
void gnomeSort(int arr[], int n) {
    int index = 0;

    while (index < n) {
        if (index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        } else {
            // Swap arr[index] and arr[index - 1]
            int temp = arr[index];
            arr[index] = arr[index - 1];
            arr[index - 1] = temp;

            // Move one step to the left
            index--;
        }
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

    gnomeSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

//Gnome Sort is a simple, intuitive, but inefficient sorting algorithm. 
//It works similarly to insertion sort but with a different mechanism for moving elements into their correct positions. 
//The algorithm iterates through the array, comparing adjacent elements and swapping them if they are out of order, and then moves left or right depending on whether a swap was made

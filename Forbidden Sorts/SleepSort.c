#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// Function to be executed by each thread
void* sleepAndPrint(void* arg) {
    int num = *(int*)arg;
    usleep(num * 1000); // Sleep for 'num' milliseconds
    printf("%d ", num);
    return NULL;
}

void sleepSort(int arr[], int n) {
    pthread_t threads[n];

    // Create a thread for each number in the array
    for (int i = 0; i < n; i++) {
        pthread_create(&threads[i], NULL, sleepAndPrint, &arr[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sleep sorted array: ");
    sleepSort(arr, n);
    printf("\n");

    return 0;
}
//Sleep Sort is another humorous and non-standard sorting algorithm where each number in the array is "sorted" by utilizing the system's sleep function. 
//The idea is to spawn a separate thread for each number, and each thread sleeps for a duration proportional to the number it represents. 
//After waking up, the thread prints the number. Since smaller numbers wake up first, they are printed first, resulting in a sorted output

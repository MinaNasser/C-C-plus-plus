#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int searchValue) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == searchValue) {
            return 1; // Value found
        } else if (arr[mid] < searchValue) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0; // Value not found
}

// Function to sort the array (bubble sort)
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10], searchValue, i;

    // Ask the user to enter 10 values
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array before performing binary search
    bubbleSort(arr, 10);

    // Ask the user to enter a value to search for
    printf("Enter a value to search for: ");
    scanf("%d", &searchValue);

    // Perform binary search
    if (binarySearch(arr, 10, searchValue)) {
        printf("Value Found\n");
    } else {
        printf("Value Not Exist\n");
    }

    return 0;
}

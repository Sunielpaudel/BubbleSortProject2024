#include <iostream>
#include "bubbleSortPro.hpp"
#include "maxFinder.hpp"

// Function to print the array
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 20, 5, 12, 7, 3, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the array before sorting
    std::cout << "Before sorting: ";
    printArray(arr, n);

    // Call findMax to get the maximum value from the sorted array
    int maxVal = maxFinder::findMax(arr, n);

    // Display the array after sorting
    std::cout << "After sorting: ";
    printArray(arr, n);

    // Display the maximum value
    std::cout << "The highest value is: " << maxVal << std::endl;

    return 0;
}

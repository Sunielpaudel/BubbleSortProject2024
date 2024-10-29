#include "maxFinder.hpp"

namespace maxFinder {
    int findMax(int arr[], int n) {
        bubbleSortPro::sort(arr, n);  // Sort the array first
        return arr[n - 1];  // Return the last element (maximum after sorting)
    }
}
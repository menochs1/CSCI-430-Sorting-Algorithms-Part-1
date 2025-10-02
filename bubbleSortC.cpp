#include "bubbleSortC.h"

// Bubble sort with swap detection whcih starts at the end of the list and works to the beginning.

void bubbleSortC(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = n - 1; i > 0; i--) {
        swapped = false;
        for (int j = n - 1; j > n - 1 - i; j--) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
#include "countingsort.hpp"

void countingsort(std::vector<int>& arr, int size, int maxVal) {
    std::vector<int> count(maxVal , 0);
    std::vector<int> output(size);

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}
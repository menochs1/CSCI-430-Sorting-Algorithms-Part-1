#include "countingsort.h"

void countingsort(std::vector<int>& arr, int size, int maxVal) {
    if (size == 0) return;

    int minVal = *std::min_element(arr.begin(), arr.end());

    int range = maxVal - minVal + 1;

    std::vector<int> count(range, 0);
    std::vector<int> output(size);

    for (int i = 0; i < size; i++) {
        count[arr[i] - minVal]++;
    }

    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}
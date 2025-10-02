#include "radixsort.h"

void radixsort(std::vector<int> &arr)
{
    int Digits = 0;
    int temp = abs(*std::max_element(arr.begin(), arr.end()));
    do {
        temp /= 10;
        Digits++;
    } while(temp != 0);
    radixSortHelper(arr, arr.size(), Digits); // Default to 32 bits for standard integers
}

static void radixSortHelper(std::vector<int> &arr, int size, int Digits) {
    std::vector<int> temp(size);

    // Flip sign bit to handle negative numbers
    for (int i = 0; i < size; i++) {
        arr[i] ^= (1u << 31);
    }

    // Perform radix sort for specified number of bits
    for (int bit = 0; bit < Digits; bit++) {
        int zeroCount = 0;

        for (int i = 0; i < size; i++) {
            if (((arr[i] >> bit) & 1) == 0)
                zeroCount++;
        }

        int zeroIndex = 0;
        int oneIndex = zeroCount;

        for (int i = 0; i < size; i++) {
            if (((arr[i] >> bit) & 1) == 0)
                temp[zeroIndex++] = arr[i];
            else
                temp[oneIndex++] = arr[i];
        }

        std::swap(arr, temp);
    }

    // Restore original sign bit
    for (int i = 0; i < size; i++) {
        arr[i] ^= (1u << 31);
    }
}


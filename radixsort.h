#ifndef RADIXSORT_H
#define RADIXSORT_H

#include <vector>
#include <algorithm>

void radixsort(std::vector<int> &arr);
static void radixSortHelper(std::vector<int> &arr, int size, int Digits);

#endif
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
#include <iostream>

void quicksort(std::vector<int> &arr);
static void quicksortHelper(std::vector<int> &arr, int low, int high);
static int partition(std::vector<int> &arr, int low, int high);

#endif
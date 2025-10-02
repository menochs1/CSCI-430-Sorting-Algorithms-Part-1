#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
#include <iostream>

void mergesort(std::vector<int> &arr);
static void mergeSortHelper(std::vector<int> &arr, int start, int end);
static void merge(std::vector<int> &arr, int start, int midPoint, int end);

#endif
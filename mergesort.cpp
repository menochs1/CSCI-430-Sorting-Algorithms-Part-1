#include "mergesort.h"

// Merges two sorted subarrays into a single sorted subarray
static void merge(std::vector<int> &arr, int start, int midPoint, int end)
{
    // Calculate lengths of the two subarrays
    int leftLength = midPoint - start + 1;
    int rightLength = end - midPoint;

    // Create temporary arrays to hold the subarrays
    std::vector<int> leftSide(leftLength);
    std::vector<int> rightSide(rightLength);

    // Copy data to temporary arrays
    for(int i = 0; i < leftLength; i++)
    {
        leftSide[i] = arr[start + i];
    }

    for(int i = 0; i < rightLength; i++)
    {
        rightSide[i] = arr[midPoint + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = start;

    // Merge the two arrays while there are elements in both
    while((i < leftLength) && (j < rightLength))
    {
        if(leftSide[i] <= rightSide[j])
        {
            arr[k] = leftSide[i];
            i++;
        }
        else
        {
            arr[k] = rightSide[j];
            j++;
        }
        k++;
    }

    while(i < leftLength)
    {
        arr[k] = leftSide[i];
        i++;
        k++;
    }

    while(j < rightLength)
    {
        arr[k] = rightSide[j];
        j++;
        k++;
    }
}

// Recursive helper function for mergesort
static void mergesortHelper(std::vector<int> &arr, int start, int end)
{
    if(start >= end) return;

    int midPoint = (start + end) / 2;

    mergesortHelper(arr, start, midPoint);
    mergesortHelper(arr, midPoint + 1, end);

    merge(arr, start, midPoint, end);
}

// Public function to initiate mergesort
void mergesort(std::vector<int> &arr)
{
    mergesortHelper(arr, 0, arr.size() - 1);
}
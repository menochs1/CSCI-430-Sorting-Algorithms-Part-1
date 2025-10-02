#include "quicksort.h"

// Partition function to place pivot element at correct position
static int partition(std::vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    // Rearrange elements based on pivot
    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Recursive helper function for quicksort
static void quicksortHelper(std::vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pivot = partition(arr, low, high);
        quicksortHelper(arr, low, pivot - 1);
        quicksortHelper(arr, pivot + 1, high);
    }
}

// Public function to initiate quicksort
void quicksort(std::vector<int> &arr)
{
    quicksortHelper(arr, 0, arr.size() - 1);
}
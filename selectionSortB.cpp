#include "selectionSortB.hpp"

// Selection Sort Algorithm - Version B
void selectionSortB(std::vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}
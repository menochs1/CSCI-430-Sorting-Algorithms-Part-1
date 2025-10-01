#include "mergesort.hpp"
#include "quicksort.hpp"
#include "selectionSortA.hpp"
#include "selectionSortB.hpp"
#include "bubbleSortA.hpp"
#include "bubbleSortB.hpp"
#include "bubbleSortC.hpp"
#include "insertionsort.hpp"
#include "countingsort.hpp"



// Example usage of the sorting algorithms
int main()
{
    std::vector<int> data = {38, 27, 43, 3, 9, 82, 10};
    mergesort(data);
    for (const auto &num : data) {
        std::cout << num << " ";
    }
    std::cout << " Merge Sort" << std::endl;

    std::vector<int> data2 = {38, 27, 43, 3, 9, 82, 10};
    quicksort(data2);
    for (const auto &num : data2) {
        std::cout << num << " ";
    }
    std::cout << " Quick Sort" << std::endl;

    std::vector<int> data3 = {38, 27, 43, 3, 9, 82, 10};
    selectionSortA(data3);
    for (const auto &num : data3) {
        std::cout << num << " ";
    }
    std::cout << " Selection Sort A" << std::endl;

    std::vector<int> data4 = {38, 27, 43, 3, 9, 82, 10};
    selectionSortB(data4);
    for (const auto &num : data4) {
        std::cout << num << " ";
    }
    std::cout << " Selection Sort B" << std::endl;

    std::vector<int> data5 = {38, 27, 43, 3, 9, 82, 10};
    bubbleSortA(data5);
    for (const auto &num : data5) {
        std::cout << num << " ";
    }
    std::cout << " Bubble Sort A" << std::endl;

    std::vector<int> data6 = {38, 27, 43, 3, 9, 82, 10};
    bubbleSortB(data6);
    for (const auto &num : data6) {
        std::cout << num << " ";
    }
    std::cout << " Bubble Sort B" << std::endl;

    std::vector<int> data7 = {38, 27, 43, 3, 9, 82, 10};
    bubbleSortC(data7);
    for (const auto &num : data7) {
        std::cout << num << " ";
    }
    std::cout << " Bubble Sort C" << std::endl;

    std::vector<int> data8 = {38, 27, 43, 3, 9, 82, 10};
    insertionSort(data8);
    for (const auto &num : data8) {
        std::cout << num << " ";
    }
    std::cout << " Insertion Sort" << std::endl;

    std::vector<int> data9 = {38, 27, 43, 3, 9, 82, 10};
    int maxVal = *std::max_element(data9.begin(), data9.end());
    countingsort(data9, data9.size(), maxVal + 1);
    for (const auto &num : data9) {
        std::cout << num << " ";
    }
    std::cout << " Counting Sort" << std::endl;

    return 0;
}
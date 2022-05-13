#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>
class QuickSort:public Sort{
    private:
        int getPivotIndex(std::vector<int> list, int low, int high);
        std::vector<int> partition(std::vector<int> list, int low, int high);
        std::vector<int> quickSort(std::vector<int> list, int low, int high);
    public:
        std::vector<int> sort(std::vector<int> list);
};
#endif
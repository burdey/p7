//
// Created by Satori on 2022/10/9.
//

#ifndef P7_QUICKSORT_H
#define P7_QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort: public Sort{
private:
    std::vector<int> storage;
    int Search(std::vector<int> Sorts, int, int, int);
public:
    QuickSort();
    void sort(std::vector<int> Sorts, int, int);
    ~QuickSort();
};


#endif //P7_QUICKSORT_H

//
// Created by Satori on 2022/10/9.
//

#ifndef P7_BUBBLESORT_H
#define P7_BUBBLESORT_H
#include "Sort.h"
#include <vector>

class BubbleSort: public Sort {
private:
    std::vector<int> storage;
public:
    BubbleSort();
    void sort(std::vector<int> Sorts);
    ~BubbleSort();
};

#endif //P7_BUBBLESORT_H
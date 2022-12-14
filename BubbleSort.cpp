//
// Created by Satori on 2022/10/9.
//

#include "BubbleSort.h"
#include <vector>
using namespace std;

BubbleSort::BubbleSort(){}

void BubbleSort::sort(vector<int> Sorts) {
    storage = Sorts;
    bool Swap = 0;
    for (unsigned int i = 0; i < storage.size(); i++) {
        for (unsigned int j = 0; j < storage.size()-1; j++) {
            if (storage.at(j) > storage.at(j + 1)) { //Determine the value of swap
                swap(storage.at(j), storage.at(j + 1));
            }
        }
    }
}

BubbleSort::~BubbleSort() {}
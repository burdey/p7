//
// Created by Satori on 2022/10/9.
//

#include "QuickSort.h"
#include <vector>
using namespace std;

QuickSort::QuickSort() {}

void QuickSort::sort(vector<int> Sorts,int begin,int end) {
    if (begin<end){
        int index = (begin+end)/2;
        int newPoint = Search(Sorts,index,begin,end);
        sort(Sorts,begin,newPoint-1);
        sort(Sorts,newPoint+1,end);
    }
}

int QuickSort::Search(vector<int> Sorts,int index,int begin,int end) {
    storage = Sorts;
    int new_point = begin;
    int value = storage.at(index);
    swap(storage.at(index), storage.at(end));

    for (int i=begin;i<=end-1;i++) {
        if (storage.at(i) <= value) {
            swap(storage.at(i), storage.at(new_point));
            new_point++;
        }
    }
    swap(storage.at(new_point),storage.at(end));
    return new_point;
}

QuickSort::~QuickSort() {}
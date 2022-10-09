//
// Created by Satori on 2022/10/9.
//

#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){}

bool RecursiveBinarySearch::Search(vector<int> Sorts,int intent,int begin,int end){
    if(begin>end) {
        return -1;
    }
    int midpoint = (begin+end)/2;
    if(Sorts.at(midpoint)>intent) {
        return Search(Sorts,intent,begin,midpoint-1);
    }
    else if(Sorts.at(midpoint)<intent) {
        return Search(Sorts,intent,midpoint+1,end);
    }
    else {
        return midpoint;
    }
}

RecursiveBinarySearch::~RecursiveBinarySearch() {}


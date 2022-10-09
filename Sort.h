//
// Created by Satori on 2022/10/9.
//

#ifndef P7_SORT_H
#define P7_SORT_H
#include <vector>

class Sort{
public:
    Sort(){};
    virtual std::vector<int> sort() {};
    virtual void sort(std::vector<int> Sorts) {};
    void swap(int&a, int&b){ //Here we can pre-fabricate a function and save it in other files.
        int temp = a;
        a = b;
        b = temp;
    };
    ~Sort() {};
};


#endif //P7_SORT_H

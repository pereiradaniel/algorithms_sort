// Algorithms - Sort Descending Order
// sort.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// void sort(RandomAccessIterator f, RandomAccessIterator l)
// sorts the elements in ascending order

// This program sorts the elements in array a in descending order
// and displays the sorted result.

#include <iostream>
#include <algorithm>
#include <functional>

int main() {
    int a[] = { 3, 2, 4, 1 };

    std::sort(a, &a[4], std::greater<int>());
    for (int e : a)
        std::cout << e << std::endl;
}
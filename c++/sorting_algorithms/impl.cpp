#include "sort.hpp"
#include <vector>

void bubble_sort(std::vector<int>& vec) {
    for(int i = 0; i < vec.size() - 1; i++) {
        // optimization for already sorted array
        bool swapped = false;
        for(int j = 0; j < vec.size() - 1; j++) {
            if (vec[j] > vec[j+1]) {
                std::swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}
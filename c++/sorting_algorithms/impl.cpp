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

void selection_sort(std::vector<int>& vec) {
    for(int i = 0; i < vec.size() - 1; i++) {
        int minimum_index = i;
        for(int j = i + 1; j < vec.size(); j++) {
            if (vec[minimum_index] > vec[j]) {
                minimum_index = j;
            }
        }
        std::swap(vec[i], vec[minimum_index]);
    }
}
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

void insertion_sort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        int sorted_index = i;
        int key = vec[sorted_index + 1];
        while (vec[sorted_index] > key && sorted_index >= 0) {
            vec[sorted_index + 1] = vec[sorted_index];
            sorted_index--;
        }
        vec[sorted_index + 1] = key;
    }
}

void merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& vec) {
    int i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            vec[k] = left[i];
            i++;
        } else {
            vec[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left.size()) {
        vec[k] = left[i];
        i++; k++;
    }

    while (j < right.size()) {
        vec[k] = right[j];
        j++; k++;
    }
}

void merge_sort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    int mid = vec.size() / 2;

    std::vector<int> left(mid);
    std::vector<int> right(vec.size() - mid);

    for (int i = 0; i < mid; i++) {
        left[i] = vec[i];
    }
    for (int i = mid; i < vec.size(); i++) {
        right[i - mid] = vec[i];
    }

    merge_sort(left);
    merge_sort(right);
    merge(left, right, vec);
}
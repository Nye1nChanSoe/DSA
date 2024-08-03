/**
 * @file main.cpp
 * @author Nyein Chan Soe
 * @brief requires at least C++11 standard
 * @version 1.0
 * @date 2024-08-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <vector>
#include "sort.hpp"

template <typename T>
void print_vec(std::vector<T>& vec);


int main(int argc, char** argv) {
    std::vector<int> vec = {5, 2, 3, 1, 4, 4};

    std::cout << "Before sorted: ";
    print_vec<int>(vec);

    // bubble_sort(vec);
    selection_sort(vec);

    std::cout << "After sorted: ";
    print_vec<int>(vec);

    return 0;
}


template <typename T>
void print_vec(std::vector<T>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

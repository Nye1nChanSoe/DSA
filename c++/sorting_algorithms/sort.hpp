#ifndef SORT_HPP
#define SORT_HPP

#include <vector>

/**
 * @brief Bubble sort compares two adjacent elements and swaps them.
 *
 * - Stable: Yes
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 *
 * @note Simple and intuitive, used for small datasets or educational purposes to
 *       illustrate the concept of sorting. Rarely used in production due to inefficiency.
 *
 * @param vec std::vector
 */
void bubble_sort(std::vector<int>& vec);

/**
 * @brief Selection sort finds the smallest or largest element in the array
 *        and move them to the sorted part repeatedly.
 *
 * - Stable: No
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n^2) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 *
 * @note Good for small datasets. Easy to implement but generally 
 *       outperformed by more efficient algorithms
 *
 * @param vec std::vector
 */
void selection_sort(std::vector<int>& vec);

/**
 * @brief Insertion sort works by building a sorted array
 *        comparing one element at a time with unsorted array
 *
 * - Stable: Yes
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 * 
 * @note Efficient for small datasets and nearly sorted data.
 *       Often used in practice for small parts of more complex algorithms
 *       (like hybrid sorting algorithms).
 *
 * @param vec std::vector
 */
void insertion_sort(std::vector<int>& vec);

#endif